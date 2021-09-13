#include <iostream>
#include <locale>

using namespace std;

struct cargo {//estrutura de cria��o do tipo cargo
	int idCargo;
	char descricao[30];
};

struct departamento {//estrutura de cria��o do tipo departamento
	int idDep;
	char nome[30];
};
struct funcionario {//estrutura de cria��o do tipo funcion�rio
	int idFunc;
	char nome[30];
	float salario;
	struct cargo *Cargo;//ponteiro do tipo cargo criado, setando para o tipo cargo
	struct departamento *Departamento;//ponteiro do tipo departamento criado, setando para o tipo departamento
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	int NumFunc; //vari�vel do n�mero de funcion�rio dados pelo usu�rio
	int NumCargo; //vari�vel do n�mero de cargos dados pelo usu�rio
	int NumDep; //vari�vel do n�mero de departamentos dados pelo usu�rio
	
	cout<<"Informe a quantidade de departamentos"<<endl;
		cin>>NumDep;//atribui a quantidade de departamentos
	
	cout<<"Informe a quantidade de cargos"<<endl;
		cin>>NumCargo;//atribui a quantidade de cargos
	
	cout<<"Informe a quantidade de funcion�rios"<<endl;
		cin>>NumFunc;//atribui a quantidade de funcion�rios
	
	cargo cargoVetor[NumCargo];//declara��o de vetor com o quantidades de cargos
	funcionario Func[NumFunc], *p;//declara��o de vetor com o quantidades de funcion�rios, e declara��o de ponteiro
	p=&Func[NumFunc];
	departamento Dep[NumDep];//declara��o de vetor com o quantidades de departamentos
	
		for (int i=0; i<2; i++){ //preencher vetor Cargo
		system("cls");
		
		cout<<"Informe a descri��o do cargo"<<endl;
			cin>>cargoVetor[i].descricao;
		
		cout<<"Informe o c�digo de identifica��o do cargo: "<<cargoVetor[i].descricao<<endl;
			cin>>cargoVetor[i].idCargo;
	};
	
	for (int i=0; i<2; i++){ //preencher vetor Dep (Departamento)
		system("cls");
		
		cout<<"Informe o nome do departamento"<<endl;
			cin>>Dep[i].nome;
		
		cout<<"Informe o c�digo de identifica��o do departamento: "<<Dep[i].nome<<endl;
			cin>>Dep[i].idDep;
	};
	
	for (int i=0; i<NumFunc; i++){ //preencher vetor Func (funcionario)
		system("cls");
		
		cout<<"Informe o nome do funcionario"<<endl;
			cin>>Func[i].nome;
		
		cout<<"Informe o c�digo de identifica��o do funcion�rio: "<<Func[i].nome<<endl;
			cin>>Func[i].idFunc;
			
		cout<<"Informe o s�lario do funcion�rio: "<<Func[i].nome<<endl;
			cin>>Func[i].salario;
			
		cout<<"Informe o cargo do funcion�rio: "<<Func[i].nome<<endl;
			cin>>p->Cargo->descricao;
			//cin>>p->Cargo->idCargo;
			
		cout<<"Informe o departamento do funcion�rio: "<<Func[i].nome<<endl;
			cin>>p->Departamento->nome;
			//cin>>p->Departamento->idDep;
	};
	
	system("cls");
	
	cout<<"=== QUADRO DE FUNCIO�RIOS ==="<<endl;	
	
	for (int i=0; i<NumFunc; i++){ //preencher vetor Func (funcionario)

		cout<<"\n\nNome do funcion�rio........"<<Func[i].nome<<endl;
		cout<<"C�digo de identifica��o...."<<Func[i].idFunc<<endl;
		cout<<"S�lario...................."<<Func[i].salario<<endl;
		cout<<"Cargo......................"<<Func[i].Cargo->descricao<<endl;
		cout<<"Departamento..............."<<Func[i].Departamento->nome<<endl;
	};
}
