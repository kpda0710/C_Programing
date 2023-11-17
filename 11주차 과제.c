#include <stdio.h>
#include <math.h>
double standardDeviation(int* arr) {
	double average, total = 0, result, num = 0;
	for (int i = 0; i < 5; i++) {
		total += arr[i];
	}
	average = total / 5;
	for (int j = 0; j < 5; j++) {
		num += pow(arr[j] - average, 2);
	}
	result = sqrt(num / 5);
	return result;
}
int main(void) {
	int num[5];
	double result;
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	result = standardDeviation(&num);
	printf("Standard Deviation = %.3lf", result);
	return 0;
}