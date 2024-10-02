#include <stdlib.h>
#include <stdio.h>

int num;

int main(void) {
	printf("Please enter a integer:");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		printf("%d is even.\n", num);
	}
	else {
		printf("%d is odd.\n", num);
	}
	system("pause");
	return 0;
}