#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	//variaveis locais
	int tabuleiro=64, r=0;
	
	//processamento
	for (int i=1; i<=64; i++){
		if (i==1){
			r=i;
		} else{
		r=(i-1)*2;
	};
		
		//saida
		cout<<"quadro "<<i<<" numero de trigos: "<<r<<endl;
	};
	
	
	return 0;
}
