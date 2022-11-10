#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

char Classe(int ip1){
	if(ip1 >=1 and ip1 <=127){
		return 'A';
	}else if(ip1 >= 128 and ip1 <=191){
		return 'B';
	}else if(ip1 >= 192 and ip1 <=223){
		return 'C';
	}else if(ip1 >= 224 and ip1 <=239){
		return 'D';
	}else if(ip1 >= 240 and ip1 <=255){
		return 'E';
	} else {
		return '!';
	}
}

string Mascara(char classe){
	if(classe == 'A'){
		return "255.0.0.0";
	}else if(classe == 'B'){
		return "255.255.0.0";
	}else if(classe == 'C'){
		return "255.255.255.0";
	} else {
		return "";
	}
}

int Bits(char classe, int cidr){
	if(classe == 'A'){
		return cidr-8;
	}else if(classe == 'B'){
		return cidr-16;
	}else if(classe == 'C'){
		return cidr-24;
	} else {
		return 0;
	}
}


int main(){
	FILE *arq;
	int ip1, ip2, ip3, ip4, cidr;
	int b1, b2, b3, b4;
	printf("\nEntre com o IP (ddd.ddd.ddd.ddd/dd):\n");
	scanf("%d.%d.%d.%d/%d",&ip1, &ip2, &ip3, &ip4, &cidr);
	
	int bits, num_redes, num_hosts, num_total_hosts;
	char classe;
	string mascara;
	
	char nome[30];
	sprintf(nome,"%d.%d.%d.%d-%d.txt",ip1, ip2, ip3, ip4, cidr);
	arq = fopen(nome,"wt");
	
	fprintf(arq,"\n%d.%d.%d.%d/%d",ip1, ip2, ip3, ip4, cidr);
	classe = Classe(ip1);
	mascara = Mascara(classe);
	bits = Bits(classe, cidr);
	fprintf(arq,"\nClasse: %c", classe);
	fprintf(arq,"\nMascara de rede padrao: %s", mascara.c_str());
	fprintf(arq,"\nNúmero de bits emprestados: %d", bits);
	
	num_redes = (int) pow(2,bits);
	num_hosts =  (int) pow(2, 32-cidr);
	num_total_hosts = num_hosts * num_redes;
	fprintf(arq,"\nNumero total de subredes: %d", num_redes);
	fprintf(arq,"\nNumero total de hosts: %d", num_hosts);
	fprintf(arq,"\nNumero hosts usaveis: %d", num_hosts-2);

	fprintf(arq,"\n\nNumero\tEnd. rede\tEnd. Broadcast\tIntervalo Host");
	for(int i=0; i <num_redes; i++){
		fprintf(arq,"\n%d", i);
		fprintf(arq,"\t%d.%d.%d.%d",ip1, ip2, ip3, ip4);
		ip4 += num_hosts;
		if(ip4 >=256){
			ip3 = ip3 + ip4/256;
			ip4 = ip4 % 256;
		}
		
		if(ip3 >=256){
			ip2 = ip2 + ip3/256;
			ip3 = ip3 % 256;
		}
		b1 = ip1;
		b2 = ip2;
		b3 = ip3;
		b4 = ip4;

		if(b4-1 < 0){
			b4 = 255;
			if(b3-1 < 0){
				b3 = 255;
				b2 = b2 - 1;
			} else {
				b3 = b3 -1;
			}
		} else {
			b4 = b4 - 1;
		}
		

		fprintf(arq,"\t%d.%d.%d.%d",b1, b2, b3, b4);
		fprintf(arq,"\t%d.%d.%d.%d ate ",ip1, ip2, ip3, ip4+1);
		fprintf(arq,"%d.%d.%d.%d",b1, b2, b3, b4-1);
		

	}
	fclose(arq);
}
