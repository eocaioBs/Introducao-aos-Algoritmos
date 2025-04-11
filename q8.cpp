#include <iostream>

using namespace std;
int main(){
	int N;
	cin >> N;
	int *vetor = new int[N];
	for(int i = 0; i < N; i++){
		cin >> vetor[i];
	}
	
	int *vetorNovo = new int[N];
	int tam = 0;
	
	for(int i = 0; i < N; i++){
		if(vetor[i] % 2 != 0 and vetor[i] % 3 == 0){
				vetorNovo[tam++] = vetor[i];
			}
	}
	cout << tam << endl;
	for(int i = 0; i < tam; i++){
		cout << vetorNovo[i] << " ";
	}
	
return 0;	
}
