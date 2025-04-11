#include <iostream>

using namespace std;
int main(){
	int n;
	cin >> n;
	
	int *vetor = new int[n];
	for(int i = 0; i < n; i++){
		cin >> vetor[i];
	}
	
	int lim1, lim2;
	cin >> lim1 >> lim2;
	
	int inicio = -1, fim = -1;
	for(int i = 0; i < n; i++){
		if(vetor[i] == lim1 or vetor[i] == lim2){
			if(inicio == -1)
				inicio = i;
			else {
				fim = i;
				break;
			}
		}
	}
	
	if(inicio != 1 and fim != 1){
		if(inicio > fim) swap(inicio, fim);
		
		for(int i = fim - 1; i > inicio; i--){
			cout << vetor[i] << " ";
		} 
		cout << endl;
	}
	
	delete[] vetor;
return 0;	
}
