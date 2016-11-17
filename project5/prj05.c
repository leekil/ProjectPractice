#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int number1;
	int i;

	while (1) {

		printf("정수를 하나 입력하세요. >> ");
		scanf("%d", &number1);

		if (number1 == 0) {
			printf("종료합니다.\n");
			break;
		}


		printf("\n이진수 : ");
		for (i = 31; i >= 0; --i) {
			printf("%d", (number1 >> i) & 1);

		}
		printf("\n\n");
		printf("팔진수: \t\t\t%o\t%o\n\n", number1, number1);
		printf("16진수: \t\t\t%X\t%X\n\n\n", number1, number1);
	}
	return 0;
}