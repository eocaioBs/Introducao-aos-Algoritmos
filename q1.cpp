#include <iostream>

using namespace std;

int main(){
	int n, *digitos;
	bool capicua = true;
	
	cin >> n;
	digitos = new int[n];

	for(int i = 0; i < n; i++){
	cin >> digitos[i];	
	}

	for(int i = 0, j = n - 1; i < j; i++, j--){
		if (digitos[i] != digitos[j]){
			capicua = false;
			break;
			}
		cout << i << " " << digitos[i] << " " << j << " " << digitos[j] << " ";
	}

	delete[] digitos;
	if(capicua){
		cout << endl << "sim" << endl;
	} else {
		cout << endl << "nao" << endl;
	}

return 0;
}
