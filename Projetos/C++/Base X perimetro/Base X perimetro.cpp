#include <iostream>

using namespace std;

int main(){
	int area, base, altura, perimetro;
	
	cout<<"Informe a altura do retangulo";
		cin>>altura;
	
	cout<<"Informe a base do retangulo";
		cin>>base;
		
	area=base*altura;
	perimetro=2*(base+altura);
	
	
	cout<<"A area do retangulo é: "<<area<<endl;
	cout<<"A perimetro do retangulo é: "<<perimetro<<endl;
	
}
