int min(int [] tab) {
	int temp = tab[0];
	for (int i = 1; i < 10; i++) {
		if tab[i] < temp
			temp = tab[i];
	}
	return temp;
}
