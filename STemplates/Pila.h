#pragma once
#include<iostream>
using namespace std;


template<class T>
class Pila {
private:
	T* vidas;
	//vector<T> datos;
	int Cima;
	const int numeroVidas;
public:
	Pila(int _numeroVidas) : numeroVidas(_numeroVidas) {
		vidas = new T[numeroVidas];
		Cima = -1;
	}
	~Pila() { delete[] vidas; }
	// funcion Push
	void Insertar(T c);
	// funcion Pop
	T Sacar();
	bool Vacia();
	bool Llena();
};

template<class T>
void Pila<T>::Insertar(T VidasInsertar) {
	if (!Llena()) {
		Cima++;
		vidas[Cima] = VidasInsertar;

		cout << "Se insertado satisfactoriamente" << endl;
	}
	else {
		cout << "No se pudo ingresar el elemento en la pila" << endl;
	}
}

template<class T>
T Pila<T>::Sacar() {
	if (!Vacia()) {
		T vidasSacar = vidas[Cima];
		Cima--;
		return vidasSacar;
	}
	else {
		cout << "No se pudo sacar el elemento de la pila" << endl;
	}
}

template<class T>
bool Pila<T>::Vacia() {
	if (Cima < 0) {
		return true;
	}
	else
		return false;
}

template<class T>
bool Pila<T>::Llena() {
	if (Cima < numeroVidas - 1) {
		return false;
	}
	else {
		return true;
	}






















};
