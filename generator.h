#include <iostream>

int * generate() {

	int* tab = new int[10];
	for (int i = 0; i < 10; i++) {
		tab[i] = i * 3;
	}

	return tab;
}
