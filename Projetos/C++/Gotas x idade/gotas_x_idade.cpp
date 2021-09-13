#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	//variaveis locais
	int idade, peso, qtde_gotas;
	
	//entradas
	cout <<"Informe a idade\n";
	cin>>idade;
	
	cout<<"Informe o peso:\n";
	cin>>peso;
	
	//processamento
	if(idade>=12){
		if(peso>=60){
		qtde_gotas=40;
			} else{
				qtde_gotas=35;	
			};
		} else {
		if (peso>5&&peso<=9){
			qtde_gotas=5;
		} else if (peso>9&&peso<16){
			qtde_gotas=10;
		} else if (peso>16&&peso<24){
			qtde_gotas=15;
		} else if (peso>24&&peso<30){
			qtde_gotas=20;
		} else {
			qtde_gotas=30;
		};
	};
		
	
	//saida
	cout<<"Quantidade de gotas:"<<qtde_gotas<<endl;
	return 0;
}
