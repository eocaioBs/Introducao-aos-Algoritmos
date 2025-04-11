#include <iostream>
#include <cmath>

using namespace std;
int main(){

	int tamA;
	cin >> tamA;
	int *vetorA = new int[tamA];
	for(int i = 0; i < tamA; i++){
		cin >> vetorA[i];
	}
	
	int tamB;
	cin >> tamB;
	int *vetorB = new int[tamB];
	for(int i = 0; i < tamB; i++){
		cin >> vetorB[i];
	}
	
	int *vetorC = new int[tamA + tamB];
	int tamC = 0;
	
	for(int i = 0; i < tamA; i++){
		vetorC[tamC++] = vetorA[i];
	}
	
	for(int i = 0; i < tamB; i++){
		bool encontrou = false;
		for(int j = 0; j < tamC; j++){
			if(vetorB[i] == vetorC[j]){
				encontrou = true;
				break;
			}
		}
		if(!encontrou){
			vetorC[tamC++] = vetorB[i];
		}
	}
	for(int i = 0; i < tamC; i++){
		cout << vetorC[i] << " ";
	}
	cout << endl;
	
	delete[] vetorA;
	delete[] vetorB;
	delete[] vetorC;
	
	return 0;
}

