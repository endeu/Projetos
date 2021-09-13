#include <iostream>
#include <locale>

using namespace std;

struct cargo {//estrutura de criação do tipo cargo
	int idCargo;
	char descricao[30];
};

struct departamento {//estrutura de criação do tipo departamento
	int idDep;
	char nome[30];
};
struct funcionario {//estrutura de criação do tipo funcionário
	int idFunc;
	char nome[30];
	float salario;
	struct cargo *Cargo;//ponteiro do tipo cargo criado, setando para o tipo cargo
	struct departamento *Departamento;//ponteiro do tipo departamento criado, setando para o tipo departamento
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	int NumFunc; //variável do número de funcionário dados pelo usuário
	int NumCargo; //variável do número de cargos dados pelo usuário
	int NumDep; //variável do número de departamentos dados pelo usuário
	
	cout<<"Informe a quantidade de departamentos"<<endl;
		cin>>NumDep;//atribui a quantidade de departamentos
	
	cout<<"Informe a quantidade de cargos"<<endl;
		cin>>NumCargo;//atribui a quantidade de cargos
	
	cout<<"Informe a quantidade de funcionários"<<endl;
		cin>>NumFunc;//atribui a quantidade de funcionários
	
	cargo cargoVetor[NumCargo];//declaração de vetor com o quantidades de cargos
	funcionario Func[NumFunc], *p;//declaração de vetor com o quantidades de funcionários, e declaração de ponteiro
	p=&Func[NumFunc];
	departamento Dep[NumDep];//declaração de vetor com o quantidades de departamentos
	
		for (int i=0; i<2; i++){ //preencher vetor Cargo
		system("cls");
		
		cout<<"Informe a descrição do cargo"<<endl;
			cin>>cargoVetor[i].descricao;
		
		cout<<"Informe o código de identificação do cargo: "<<cargoVetor[i].descricao<<endl;
			cin>>cargoVetor[i].idCargo;
	};
	
	for (int i=0; i<2; i++){ //preencher vetor Dep (Departamento)
		system("cls");
		
		cout<<"Informe o nome do departamento"<<endl;
			cin>>Dep[i].nome;
		
		cout<<"Informe o código de identificação do departamento: "<<Dep[i].nome<<endl;
			cin>>Dep[i].idDep;
	};
	
	for (int i=0; i<NumFunc; i++){ //preencher vetor Func (funcionario)
		system("cls");
		
		cout<<"Informe o nome do funcionario"<<endl;
			cin>>Func[i].nome;
		
		cout<<"Informe o código de identificação do funcionário: "<<Func[i].nome<<endl;
			cin>>Func[i].idFunc;
			
		cout<<"Informe o sálario do funcionário: "<<Func[i].nome<<endl;
			cin>>Func[i].salario;
			
		cout<<"Informe o cargo do funcionário: "<<Func[i].nome<<endl;
			cin>>p->Cargo->descricao;
			//cin>>p->Cargo->idCargo;
			
		cout<<"Informe o departamento do funcionário: "<<Func[i].nome<<endl;
			cin>>p->Departamento->nome;
			//cin>>p->Departamento->idDep;
	};
	
	system("cls");
	
	cout<<"=== QUADRO DE FUNCIOÁRIOS ==="<<endl;	
	
	for (int i=0; i<NumFunc; i++){ //preencher vetor Func (funcionario)

		cout<<"\n\nNome do funcionário........"<<Func[i].nome<<endl;
		cout<<"Código de identificação...."<<Func[i].idFunc<<endl;
		cout<<"Sálario...................."<<Func[i].salario<<endl;
		cout<<"Cargo......................"<<Func[i].Cargo->descricao<<endl;
		cout<<"Departamento..............."<<Func[i].Departamento->nome<<endl;
	};
}
