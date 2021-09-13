#include <iostream>
#include <locale>

using namespace std;

int main(){
	int a[5]={1,2,3,4,5};//declaração e inicialização do ponteiro
	int *p = NULL;//declaração do ponteiro
	
	p=&a[5];//apontando para o endereço da primeira posição do vetor
	
	for(int x=0; x<5; x++){
		
		p=&a[x];/*dessa forma, o ponteiro ira passar por todo o vetor, pois ele aponta pra o endereço
					do contador (x) do vetor em cada looping*/
		*p=22;
		cout<<p<<endl;
		cout<<a[x]<<endl;
	};
	
}
