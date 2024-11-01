#include <iostream>
#include <cmath>
using namespace std;

void funcao(int x, int& n){
	cout << x;
	while (x!=1){
		x = x%2==0 ? x/2 : (x*3) + 1;
		n++;
		cout << " " << x;
		
	}
}
int main(){
	int x, n;
	
	cin >> x;
	n = 1;
	funcao(x, n);

	cout << endl << n;

	return 0;
}
