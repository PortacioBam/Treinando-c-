//Função template
#include <iostream>
using namespace std;

template <class T>
T GetMax(T num1,  T num2) {
	T resultado;
	resultado = ( num1 > num2 ) ? num1 : num2;
	return ( resultado );
}

int main() {
	int a = 5, b = 6, m;
	long x = 10, y = 5, n;
	
	m = GetMax<int>( a, b );
	n = GetMax<long>( x, y );
	
	cout << m << endl;
	cout << n << endl;
	
	return 0;
}
