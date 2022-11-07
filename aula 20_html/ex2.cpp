#include <cstdio>
#include <cstdlib>
#include <ctime>

struct Data {
	int dia;
	int mes;
	int ano;
};

Data datas[100];

Data gera_data(){
	Data aux;
	aux.dia = rand()%30+1;
	aux.mes = rand()%12+1;
	aux.ano = 2000 + rand()%22;
	return aux;
}

int main(){
	srand(time(NULL));
	FILE *arq;
	arq = fopen("datas.txt", "wt");
	
	if(arq == NULL){
		printf("\nErro");
		return 1;
	}
	for(int i=0;i < 100; i++){
		datas[i] = gera_data();
	}
	for(int i=0;i < 100; i++){
		fprintf(arq,"\n%02d/%02d/%04d", datas[i].dia, datas[i].mes, datas[i].ano);
	}
	
	fclose(arq);
	
	arq = fopen("datas.html", "wt");
	
	if(arq == NULL){
		printf("\nErro");
		return 1;
	}
	
	for(int i=0;i < 100; i++){
		datas[i] = gera_data();
	}
	
	fprintf(arq, "\n<html>\n\t<body>");
	fprintf(arq, "\n<table border=\"1\">");

	for(int i=0;i < 100; i++){
		fprintf(arq, "\n<tr><td>"); 
		fprintf(arq,"%02d</td><td>%02d</td><td>%04d", datas[i].dia, datas[i].mes, datas[i].ano);
		fprintf(arq, "</td></tr>");
	}
	fprintf(arq, "\n</table>");
	fprintf(arq, "\n\t</body>\n</html>");
	fclose(arq);
	
	
}
