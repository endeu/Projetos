#include <iostream>
#include <locale>

using namespace std;

int main(){
	int a[5]={1,2,3,4,5};//declara��o e inicializa��o do ponteiro
	int *p = NULL;//declara��o do ponteiro
	
	p=&a[5];//apontando para o endere�o da primeira posi��o do vetor
	
	for(int x=0; x<5; x++){
		
		p=&a[x];/*dessa forma, o ponteiro ira passar por todo o vetor, pois ele aponta pra o endere�o
					do contador (x) do vetor em cada looping*/
		*p=22;
		cout<<p<<endl;
		cout<<a[x]<<endl;
	};
	
}
