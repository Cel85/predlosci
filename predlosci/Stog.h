#pragma once
#define SIZE 10
template <class T>
class Stog
{
	T* polje;
	int vrh;
	int kapacitet;
public:
	Stog(int size = SIZE);
	bool dodaj(int value);
	bool skini(&vlaue);
};

