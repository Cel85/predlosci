/*Napišite predložak funkcije Sortiraj koja kao parametar prima pokazivač na polje generičkog tipa i njegovu veličinu (broj elemenata),
te sortira to polje upotrebom Bubble sort algoritma. */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//obično polje
template<class T>
T& sortiraj(T* polje, int size) {
	int i, j, temp;
	for (i = 1; i < size; ++i)
	{
		for (j = 0; j < (size - i); ++j)
			if (polje[j] > polje[j + 1])
			{
				temp = polje[j];
				polje[j] = polje[j + 1];
				polje[j + 1] = temp;
			}
	}
	return *polje;
}


int main() {
	
	//"obično polje"
	int polje[] = { 3, 34, 1, 2, 93, 45 };
	int size = sizeof(polje) / sizeof(*polje);//ukupna velinčina u byte / jedan član u byte

	sortiraj(polje, size);

	for (int i = 0; i < size; i++) {
		cout << polje[i] << endl;
	}


	system("pause");
	return 0;
}