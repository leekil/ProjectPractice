#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int number1;
	int i;

	while (1) {

		printf("������ �ϳ� �Է��ϼ���. >> ");
		scanf("%d", &number1);

		if (number1 == 0) {
			printf("�����մϴ�.\n");
			break;
		}


		printf("\n������ : ");
		for (i = 31; i >= 0; --i) {
			printf("%d", (number1 >> i) & 1);

		}
		printf("\n\n");
		printf("������: \t\t\t%o\t%o\n\n", number1, number1);
		printf("16����: \t\t\t%X\t%X\n\n\n", number1, number1);
	}
	return 0;
}