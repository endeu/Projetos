#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
	
	int cod_palestra;
	string a[4][3] = {
	{"Linux", "Audit�rio 1", "8h as 9h"},
	{"Recupe��o de Desastres", "Auditorio 2", "9h as 10h"},
	{"Windows Server", "Auditorio 3", "13h as 14h"},
	{"L�gica e Programa��o", "Auditorio Principal", "15h as 17h"}
	};
	
	//entrada	
	cout<<"Informeo c�digo da palestra:"<<endl;
	cout<<"1 - Linux"<<endl;
	cout<<"2 - Recupera��o de desastres"<<endl;
	cout<<"3 - Windows Server"<<endl;
	cout<<"4 - Logica e progama��o"<<endl;
	cin>>cod_palestra;
	
	//processamento
	if (cod_palestra == 1){
		//saida
	cout<<"\n Sua palestra ser� sobre: " <<a[0][0]<<endl;
	cout<<"Ministrada no : " <<a[0][1]<<endl;
	cout<<"Com o hor�rio de: " <<a[0][2]<<endl;
}
		else if (cod_palestra == 2){
		//saida
	cout<<"Sua palestra ser� sobre: " <<a[1][0]<<endl;
	cout<<"Ministrada no : " <<a[1][1]<<endl;
	cout<<"Com o hor�rio de: " <<a[1][2]<<endl;
}
		else if (cod_palestra == 3){
		//saida
	cout<<"Sua palestra ser� sobre: " <<a[2][0]<<endl;
	cout<<"Ministrada no : " <<a[2][1]<<endl;
	cout<<"Com o hor�rio de: " <<a[2][2]<<endl;
}
		else if (cod_palestra == 4){
		//saida
	cout<<"Sua palestra ser� sobre: " <<a[3][0]<<endl;
	cout<<"Ministrada no : " <<a[3][1]<<endl;
	cout<<"Com o hor�rio de: " <<a[3][2]<<endl;
}
		else {
		//saida	
		cout<<"Codigo incorreto! Verifique e tente novamente";
		}
		
cout<<"Boa palestra :)";
	
	
	
	
	return 0;
}
