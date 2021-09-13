#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	//variaveis locais
	int cavalo, ferraduras;
	
	cout<<"Cálculo da quantidade de ferraduras para cavalos"<<endl;
	cout<<""<<endl;
	
	//entrada
	cout<<"Informe a quantidade de cavalos"<<endl;
	cin>>cavalo;
	
	//processamento
	ferraduras=cavalo*4;
	
	//saida
	cout<<"Total de ferraduras: " <<ferraduras<<endl;
	
	
	
	return 0;
}
