#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
	int main(){
	
	int valor, valor2, maior, segundoMaior, menor, segundoMenor;
	
	
	ifstream entry("entrada.txt");
	/*entry >> valor >> valor2;
	if (valor > valor2) {
		maior = valor;
		segundoMaior = valor2;
	} else {
		maior = valor2;
		segundoMaior = valor;
	} 
	
	if (valor < valor2) {
		menor = valor;
		segundoMenor = valor2;
	} else {
		menor = valor2;
		segundoMenor = valor;
	} */
	
	
	while (entry >> valor >> valor2) {	
		if (valor > valor2) {
			segundoMaior = valor2;
			maior = valor;
		} else if (valor < valor2) {
			segundoMaior = valor;
			maior = valor2;
		} 
		if (valor < valor2) {
			segundoMenor = valor2;
			menor = valor;
		} else if (valor > valor2) {
			segundoMenor = valor;
			menor = valor2;
		}
	} 
	
	cout << menor << endl << segundoMenor << endl << maior << endl << segundoMaior;
	entry.close();	
	
	
	
	return 0;
}
