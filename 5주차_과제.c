#include <stdio.h>
int main(void) {
	int num, i;
	printf("Please enter a number: ");
	scanf("%d", &num);

	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("It is not a prime number.\n");
			break;
		}
	}
	if (num == i) {
		printf("It is a prime number.\n");
	}
	return 0;
}