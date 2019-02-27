#include "Stog.h"


template<class T>
Stog<T>::Stog(int size)
{
	polje = new T[size];//konstruktorom kreiramo novo polje
	kapacitet = size;//setiramo kapacitet
	vrh = -1;//starta od -1 zato sto cemo ga diza za 1 kod svakog dodavanja
}

template<class T>
bool Stog<T>::dodaj(int value)
{
	cout << "Ubacujem " << value << endl;
	polje[++vrh] = value; //kod svakako nogo dodavanja dizemo index vrha za jedan
	return false;
}

