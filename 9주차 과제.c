#include <stdio.h>
int main(void) {
	int num[5];
	int even[5], odd[5];
	int evenCount = 0, oddCount = 0;

	printf("Please input five integers: ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (num[i] % 2 == 0) {
			even[evenCount] = num[i];
			evenCount++;
		}
		else {
			odd[oddCount] = num[i];
			oddCount++;
		}
	}

	printf("Odd numbers: ");
	for (int i = 0; i < oddCount; i++) {
		printf("%d ", odd[i]);
	}

	printf("\nEven numbers: ");
	for (int i = 0; i < evenCount; i++) {
		printf("%d ", even[i]);
	}
}