#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, *vetorA, cont2 = 0, cont3 = 0, cont6 = 0;
	cin >> n;
	
	vetorA = new int[n];
	
	for(int i = 0; i < n; i++){
		cin >> vetorA[i];
		}
	for(int i = 0; i < n; i++){
		if(vetorA[i] % 2 == 0){
			cout << vetorA[i] << " ";
			cont2++;
		}
	}
	if(cont2 == 0){
		cout << "0";
		}
	cout << endl;
	for(int i = 0; i < n; i++){
		if(vetorA[i] % 3 == 0){
			cout << vetorA[i] << " ";
			cont3++;
		}
	}
	if(cont3 == 0){
		cout << "0";
		}
	cout << endl;
	for(int i = 0; i < n; i++){
		if(vetorA[i] % 6 == 0){
			cout << vetorA[i] << " ";
			cont6++;
		}
	}
	if(cont6 == 0){
		cout << "0";
		}
		
return 0;
}
