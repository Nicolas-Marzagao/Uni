#include <stdio.h>

// Prototipo das funções
int sum(int x, int y);


int main() {
	int x = 4;
	int y = 3;
	
	printf("%d", sum(x, y));
	
	// Prototipo da fução local
	int mul(int x, int y);
	
	printf("%d", div(x, y));
}

int sum(int x, int y) {
	return x + y;
}

int mul(int x, int y) {
	return x * y;
}

