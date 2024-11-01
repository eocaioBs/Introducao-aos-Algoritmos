#include <iostream>
#include <cmath>
#include <string>


using namespace std;

void conversao(double distancia, double& distanciaConvertida, int& teste, string unidade){
	if (unidade == "centimetro"){
		distanciaConvertida = distancia*100;
	} else if (unidade == "metro"){
		distanciaConvertida = distancia/100;
	} else {
		teste = 1;
	}
}

int main(){
	int teste;
	double distancia, distanciaConvertida;
	string unidade;
	
	cin >> distancia >> unidade;
	conversao(distancia, distanciaConvertida, teste, unidade);
	
	if (unidade=="centimetro"){
		cout << distanciaConvertida << " cm" << endl;
	} else if (unidade=="metro"){
		cout << distanciaConvertida << " m" << endl;
	} else {
		cout << "ERRO" << endl;
	}
	
	
	return 0;
}
