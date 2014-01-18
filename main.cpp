#include <iostream>
#include "min.h"
#include "max.h"
#include "utils.h"

int main() {
	int* tab = generate();
	print_tab(tab);
	std::cout << "min: " << min(tab) << " max: " << max(tab) << " suma " << add(tab);
	return 0;
}
