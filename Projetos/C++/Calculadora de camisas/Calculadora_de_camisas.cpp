#include <iostream>
#include <locale.h>

using namespace std;

	int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");	
	
	//variáveis locais
	int c_pequena, c_media, c_grande, cp, cm, cg, vlr_total;
	
	c_pequena=12;
	c_media=15;
	c_grande=18;
	
	//entradas
	cout<<"informe a quantidade de camisas pequenas compradas"<<endl;
	cin>>cp;
	cout<<"informe a quantidade de camisas medias compradas"<<endl;
	cin>>cm;
	cout<<"informe a quantidade de camisas grandes compradas"<<endl;
	cin>>cg;
	
	//processamento
	cp=c_pequena*cp;
	cm=c_media*cm;
	cg=c_grande*cg;
	
	vlr_total=cp+cm+cg;
	
	//saida
	cout<<"valor total gasto de: "<<vlr_total<<endl;
	cout<<"valor gasto em camisas pequenas: "<<cp<<endl;
	cout<<"valor gasto em camisas médias: "<<cm<<endl;
	cout<<"valor gasto em camisas grandes: "<<cg<<endl;
	
	
	return 0;	
}
