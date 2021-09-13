#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <locale>

using namespace std;

//variaveis globais
int totalSoma=0;

//fun��es
int somaVetor(int vetor[], int nElementos);
int inverterVetor(int vetor[], int init, int end);

int somaVetor(int vetor[], int nElementos){ //soma dos vetores
	
	if(nElementos==0){ //condi��o de parada
		return 0;
	} else {
		return totalSoma = vetor[nElementos-1] + somaVetor(vetor, nElementos-1); //chamada da fun��o recursiva
	}
};

int *inverter_vetor (int vetor[], int init, int end) 
{
	int aux; //declara��o da variavel auxiliar que ir� guardar o valor de init
	if(init>=end) //condi��o de parada
		return vetor;
	else{
		aux = vetor[init];
		vetor[init] = vetor[end];
		vetor[end] = aux;
		return inverter_vetor(vetor, init+1, end-1); //chamada da fun��o recursiva
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int *vetor, n, *vetorInvertido;
	char continuar;
	
	cout<<"Informe a quantidade de posi��es que o vetor ir� possuir"<<endl;
		cin>>n;
	
	vetor = (int*)calloc(n, sizeof(int));
	
	
	for(int i=0; i<=n; i++){
		
		if(i<n){ //if para verificar se j� populou todas as posi��es do primeiro vertor informado
		
			cout<<"\nInforme o n�mero da posi��o "<<i+1<<" no vetor"<<endl;
				cin>>vetor[i];
			
		} else { //ap�s popular todo vetor
			cout<<"Deseja alterar o tamanho do vetor?"<<endl; //pergunta se o usu�rio gostaria de alterar o tamanho do vetor
				cin>>continuar;
				
				if(toupper(continuar)=='Y'){ //se sim, ele informa o novo n�mero, sen�o sai do la�o de repti��o
					
					cout<<"Informe a nova quantidade de posi��es que o vetor ir� possuir"<<endl;
						cin>>n;
						i--; //para continuar da �ltima posi��o de parada do vetor
					vetor = (int*)realloc(vetor, n * sizeof(int)); //realoca o vetor com o novo n�mero de n
				}
		}
	};
	system("cls");
	cout<<"A soma dos vetores � "<<somaVetor(vetor, n)<<endl;
	
	//imprime soma dos elementos do vetor
	vetorInvertido = inverter_vetor(vetor, 0, n-1);
	
	cout<<"vetor invertido: ";
	
	//imprime vetor invertido
	for(int i=0; i<n; i++){
		cout<<vetorInvertido[i]<<" | ";
	}
}
