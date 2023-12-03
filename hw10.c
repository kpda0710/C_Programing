#include <stdio.h>
typedef struct {
	char name[20];
	char country[20];
	int population;
} City;
int main(void) {
	City arr[3];
	printf("Input three cities: \n");

	for (int i = 0; i < 3; i++) {
		printf("Name > "); 
		scanf_s("%[^\n]s", arr[i].name, sizeof(arr[i].name));
		fgetc(stdin);
		printf("Country > "); 
		scanf_s("%[^\n]s", arr[i].country, sizeof(arr[i].country));
		fgetc(stdin);
		printf("Population > "); 
		scanf_s("%d", &arr[i].population);
		fgetc(stdin);
	}

	printf("Printing the three cities:\n");

	for (int i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people\n", i + 1, arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}
