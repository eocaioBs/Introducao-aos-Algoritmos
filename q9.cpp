#include <iostream>
#include <string>

using namespace std;
string* alocarVetor(int tam){
	return new string[tam];
}

string* redimensionarVetor(string* vetor, int tam){
	string* novoVetor = alocarVetor(tam);
	for(int i = 0; i < tam - 1; i++){
		novoVetor[i] = vetor[i];
	}
	delete[] vetor;
	return novoVetor;
}

int main(){
	int qtd1;
	cin >> qtd1;
	
	string* vetor = alocarVetor(qtd1);
	
	for(int i = 0; i < qtd1; i++){
		cin >> vetor[i];
	}
	
	int qtd2;
	cin >> qtd2;
	
	for(int i = 0; i < qtd2; i++){
		string ingrediente;
		cin >> ingrediente;
		
		bool encontrado = false;
		for(int j = 0; j < qtd1; j++){
			if(vetor[j] == ingrediente){
				encontrado = true;
				break;
			}
		}
		
		if(!encontrado){
			qtd1++;
			vetor = redimensionarVetor(vetor, qtd1);
			vetor[qtd1 - 1] = ingrediente;
		}
	}
	
	cout << qtd1 << endl;
	for(int i = 0; i < qtd1; i++){
		cout << vetor[i] << endl;
	}
	delete[] vetor;
return 0;
}
