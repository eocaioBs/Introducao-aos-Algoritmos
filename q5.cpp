#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	float *vetor = new float[n];
	
	for(int i = 0; i < n; i++){
		cin >> vetor[i];
	}
	
	float menor = vetor[0], segundoMenor = vetor[0];
	float maior = vetor[0], segundoMaior = vetor[0];
	
	for(int i = 0; i < n; i++){
		if(vetor[i] < menor){
			segundoMenor = menor;
			menor = vetor[i];
		} else if (vetor[i] < segundoMenor or segundoMenor == menor){
			segundoMenor = vetor[i];
		}
		if(vetor[i] > maior){
			segundoMaior = maior;
			maior = vetor[i];
		} else if (vetor[i] > segundoMaior or segundoMaior == maior){
			segundoMaior = vetor[i];
		}
	}
	
	float *novoVetor = new float[n-2];
	int index = 0;
	for(int i = 0; i < n; i++){
		if(vetor[i] != segundoMaior and vetor[i] != segundoMenor){
			novoVetor[index++] = vetor[i];
		}
	}
	for(int i = 0; i < n-2; i++){
		cout << novoVetor[i] << endl;
	}
	
	delete[] vetor;
	delete[] novoVetor;
	
	return 0;
}
