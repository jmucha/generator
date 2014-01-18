#include <iostream>
#include <generator>

void print_tab(int[] pointer) {
	for(int i=0; i<10; i++) {
		std::cout << pointer[i] << " ";
	}
}


int add(int[] pointer) {
	int suma = 0;
	for(int i=0; i<10; i++) {
		suma += i;
	}

	return suma;
}
