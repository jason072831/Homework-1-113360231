#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, c, temp;
	printf("Please enter three integers.(Use space to separate):");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	printf("The smallest integers is %d\n", a);
	printf("The largest integers is %d\n", c);
	system("pause");
	return 0;
}

