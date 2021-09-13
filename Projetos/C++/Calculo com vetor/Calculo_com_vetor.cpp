#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <locale>

using namespace std;

//variaveis globais
int totalSoma=0;

//funções
int somaVetor(int vetor[], int nElementos);
int inverterVetor(int vetor[], int init, int end);

int somaVetor(int vetor[], int nElementos){ //soma dos vetores
	
	if(nElementos==0){ //condição de parada
		return 0;
	} else {
		return totalSoma = vetor[nElementos-1] + somaVetor(vetor, nElementos-1); //chamada da função recursiva
	}
};

int *inverter_vetor (int vetor[], int init, int end) 
{
	int aux; //declaração da variavel auxiliar que irá guardar o valor de init
	if(init>=end) //condição de parada
		return vetor;
	else{
		aux = vetor[init];
		vetor[init] = vetor[end];
		vetor[end] = aux;
		return inverter_vetor(vetor, init+1, end-1); //chamada da função recursiva
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int *vetor, n, *vetorInvertido;
	char continuar;
	
	cout<<"Informe a quantidade de posições que o vetor irá possuir"<<endl;
		cin>>n;
	
	vetor = (int*)calloc(n, sizeof(int));
	
	
	for(int i=0; i<=n; i++){
		
		if(i<n){ //if para verificar se já populou todas as posições do primeiro vertor informado
		
			cout<<"\nInforme o número da posição "<<i+1<<" no vetor"<<endl;
				cin>>vetor[i];
			
		} else { //após popular todo vetor
			cout<<"Deseja alterar o tamanho do vetor?"<<endl; //pergunta se o usuário gostaria de alterar o tamanho do vetor
				cin>>continuar;
				
				if(toupper(continuar)=='Y'){ //se sim, ele informa o novo número, senão sai do laço de reptição
					
					cout<<"Informe a nova quantidade de posições que o vetor irá possuir"<<endl;
						cin>>n;
						i--; //para continuar da última posição de parada do vetor
					vetor = (int*)realloc(vetor, n * sizeof(int)); //realoca o vetor com o novo número de n
				}
		}
	};
	system("cls");
	cout<<"A soma dos vetores é "<<somaVetor(vetor, n)<<endl;
	
	//imprime soma dos elementos do vetor
	vetorInvertido = inverter_vetor(vetor, 0, n-1);
	
	cout<<"vetor invertido: ";
	
	//imprime vetor invertido
	for(int i=0; i<n; i++){
		cout<<vetorInvertido[i]<<" | ";
	}
}
