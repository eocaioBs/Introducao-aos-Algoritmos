#include <iostream>
#include <cmath>


using namespace std;

void formula(int a, int b , int c, int& teste, double& v1, double& v2){
	double delta;
	delta = pow(b, 2) - (4*a*c);
	if (delta >= 0) {
		v1 = ((-1*b) + (sqrt(delta))) / (2*a);
		v2 = ((-1*b) - (sqrt(delta))) / (2*a);
	} else {
		teste = 0;
	}
}


int main(){
	int a, b, c, teste;
	double v1, v2;
	
	cin >> a >> b >> c;
	formula(a, b, c, teste, v1, v2);
	
	
	if (teste == 0){
		cout << "Não existem raízes reais";
	} else { 
		cout << v1 << " e " << v2;
	}
	return 0;
}
