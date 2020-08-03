#include<stdio.h>
main() {
	int x, n;
	printf("Enter the number: ");
	scanf_s("%d", &x);
	for (n = 1; n <= 12; n++) {
		printf("%d x %d = %d\n", x, n, x * n);
	}
}