#include <iostream>

using namespace std;

int main(){

	int N, *A, *B;
	int igual = 1;

	cin >> N;

	A = new int[N];
	for(i = 0; i < N; i++){
		cin >> A[i];
		}
	B = new int[N];
	for(int j = N - 1; j > 0; j--){
		cin >> B[j];
		}
	
	
	while(
	if (igual == true){
		cout << "IGUAIS";
	} else {
		cout << "DIFERENTES";
	}
	
	delete A;
	delete B;
return 0;
}
