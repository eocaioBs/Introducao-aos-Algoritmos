#include <iostream>
#include <string>
using namespace std;

int main(){
	int numIng1;
	cin >> numIng1;
	string *vetor1 = new string[numIng1];
	for(int i = 0; i < numIng1; i++){
		cin >> vetor1[i]; 
	} 
	
	int numIng2;
	cin >> numIng2;
	
	string *vetor2 = new string[numIng2]; 
	for(int i = 0; i < numIng2; i++){
		cin >> vetor2[i];
	}
	
	bool encontrou = false;
	for(int i = 0; i < numIng1; i++){
		bool presente = false;
		for(int j = 0; j < numIng2; j++){
			if(vetor1[i] == vetor2[j]){
				presente = true;
				break;
			}	
		}

	
		if(!presente){
		cout << vetor1[i] << endl;
		encontrou = true;
		}
	}
	
	if(!encontrou){
		cout << "NADA";
	}
	
	cout << endl;
	delete[] vetor1;
	delete[] vetor2;
	
	return 0;
}
