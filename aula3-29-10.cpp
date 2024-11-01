#include <iostream> 
#include <cmath>
using namespace std;
void conta(int anos, int meses, int dias, int soma){
	int anosD;
	anosD = anos*365;
	int mesesD;
	mesesD = meses*30;
	
	soma = anosD+mesesD+dias;
	


int main(){
	int anos, meses, dias, soma;
	cin >> anos >> meses >> dias;
	cout << soma;
return 0;
}
