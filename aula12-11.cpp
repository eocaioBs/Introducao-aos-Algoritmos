#include <iostream>
using namespace std;
int main(){
	
	int *a, *b, *R;
	a = new int;
	b = new int;
	R = new int;
	
	cin >> *a >> *b;
	*R = (*a)*(*b);
	cout << *R << endl;
	delete a;
	delete b;
	delete R;
	
	char *letra;
	letra  = new char;
	cin >> *letra;
	cout << *letra << endl;
	delete letra;
	
	return 0;
}
