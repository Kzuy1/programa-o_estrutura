#include <cstdio>

struct Data {
	int dia;
	int mes;
	int ano;
};

int main(){
	Data dtNasc_bill, dtLanc_Win1;
	
	dtNasc_bill.dia = 28;
	dtNasc_bill.mes = 10;
	dtNasc_bill.ano = 1955;
	
	dtLanc_Win1.dia = 20;
	dtLanc_Win1.mes = 11;
	dtLanc_Win1.ano = 1985;
	
	printf("\nData de nascimento de Bill Gates: %d/%d/%d", \
			dtNasc_bill.dia, dtNasc_bill.mes, dtNasc_bill.ano);
	
	printf("\nData de lancamento do Windows 1: %d/%d/%d", \
			dtLanc_Win1.dia, dtLanc_Win1.mes, dtLanc_Win1.ano);	
	
}
