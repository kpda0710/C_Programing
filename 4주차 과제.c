#include <stdio.h>
int main(void) {
	int num;
	printf("피라미드 층수를 입력하세요: ");
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int k = i; k < num - 1; k++) {
			printf(" ");
		}
		for (int j = 0; j <= i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}