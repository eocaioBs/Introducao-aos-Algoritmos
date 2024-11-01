#include <iostream>
using namespace std;
bool retornaprimo(int x){
	int i = 2;
	while (i < x){
		if (x%1 == 0) return false;
		i++;
	}
	return true;
}	
int main(){
	int x;
	cin >> x;
	cout << (retornaprimo(x)) <<  "É primo";


return 0;
}
