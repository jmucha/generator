#include <iostream>
#include "generator.h"

void print_tab(int* pointer) {
	for(int i=0; i<10; i++) {
		std::cout << pointer[i] << " ";
	}
}


int add(int* pointer) {
	int suma = 0;
	for(int i=0; i<10; i++) {
		suma += i;
	}

	return suma;
}

int max(int * tab) {
	int temp = tab[0];
	for (int i = 1; i < 10; i++) {
		if (tab[i] > temp)
			temp = tab[i];
	}
	return temp;
}

int min(int tab[]) {
	int temp = tab[0];
	for (int i = 1; i < 10; i++) {
		if (tab[i] < temp)
			temp = tab[i];
	}
	return temp;
}
