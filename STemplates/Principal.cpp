#include<iostream>
using namespace std;
#include "pila.h"

int main() {

	Pila<int> PilaVidasInt(5);

	PilaVidasInt.Insertar(1);
	cout << "vida: " << PilaVidasInt.Sacar() << endl;
	PilaVidasInt.Insertar(2);
	cout << "vida: " << PilaVidasInt.Sacar() << endl;
	PilaVidasInt.Insertar(3);
	cout << "vida: " << PilaVidasInt.Sacar() << endl;
	PilaVidasInt.Insertar(4);
	cout << "vida: " << PilaVidasInt.Sacar() << endl;
	PilaVidasInt.Insertar(5);
	cout << "vida: " << PilaVidasInt.Sacar() << endl;


	return 0;
}