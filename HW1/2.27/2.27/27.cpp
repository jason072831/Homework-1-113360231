#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, k;
	int rows = 5;
	for (i = 1; i <= rows; i++) {
		for (j = i; j < rows; j++) {
			printf(" ");
		}
		//�Ů�
		for (k = 1; k <= (2 * i-1); k++) {
			printf("*");
		}
		//*
		printf("\n");
	}

	return 0;
}