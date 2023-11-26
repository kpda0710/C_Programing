#include <stdio.h>
#include <string.h>
void swap(char* ch) {
	const int diff = 'a' - 'A';
	while (*ch != '\n') {
		if (*ch >= 'A' && *ch <= 'Z')
			*ch = *ch + diff;
		else if (*ch >= 'a' && *ch <= 'z') {
			*ch = *ch - diff;
		}
		ch++;
	}
}
int main(void) {
	char ch[100];
	printf("Input> ");
	fgets(ch, sizeof(ch), stdin);

	swap(ch);
	printf("Output> %s\n", ch);
	return 0;
}
