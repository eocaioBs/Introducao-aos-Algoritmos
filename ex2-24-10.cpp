#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;
	int main(){
	
	int N, i = 1, Ntri = 0; //Ntria(N) = N + Ntria(N-1);
	
	ifstream entry("entrada.txt");
	entry >> N;
	entry.close();
	
	while(i <= N){
		Ntri += i;
		i++;
	}
	
	ofstream exit("saida.txt");
	exit << Ntri << endl;
	exit.close();
	
	
	return 0;
}
