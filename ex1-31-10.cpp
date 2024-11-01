#include <iostream>
#include <cmath>


void funcao(int x){
	if (x == 0) return;
	
	for(int i = 0; i < x; i++){
		for(int j = 0 ;j < i+1; j++){
			std::cout << j+1 << " ";
		}
		std::cout << std::endl;
	}
}

using namespace std;
int main(){
	int x;
	cin >> x;
	funcao(x);
	
	return 0;
}
