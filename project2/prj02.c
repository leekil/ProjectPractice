#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char ch1, ch2;
	int sel;
	int num1, num2;

	while (1) {

		printf("\t\t[1] ��Ʈ AND(&)\n\n");
		printf("\t\t[2] ��Ʈ OR(|)\n\n");
		printf("\t\t[3] ��Ʈ XOR(^)\n\n");
		printf("\t\t[4] ��Ʈ COMPLEMENT(~)\n\n");
		printf("\t\t[0] ����(stop)\n\n");

		printf("�� ���� �� �ϳ��� �����ϼ���. >> ");
		scanf("%c%d%c", &ch1, &sel, &ch2);

		if (sel == 0) {
			printf("�����մϴ�.\n");
			break;
		}

		printf("\n\n\n\n");

		switch (sel) {
		case 1:
			printf("��Ʈ ������ �� ���� �Է� >> ");
			scanf("%d %d", &num1, &num2);

			printf("\n\t    x = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num1 >> i) & 1);

			}
			printf(" %d\n\n", num1);

			printf("\t    y = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num2 >> i) & 1);

			}
			printf(" %d\n\n", num2);

			printf("\tx & y = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", ((num1 & num2) >> i) & 1);

			}
			printf(" %d\n\n", num1 & num2);
			break;

		case 2:
			printf("��Ʈ ������ �� ���� �Է� >> ");
			scanf("%d %d", &num1, &num2);

			printf("\n\t    x = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num1 >> i) & 1);

			}
			printf(" %d\n\n", num1);

			printf("\t    y = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num2 >> i) & 1);

			}
			printf(" %d\n\n", num2);

			printf("\tx | y = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", ((num1 | num2) >> i) & 1);

			}
			printf(" %d\n\n", num1 | num2);
			break;

		case 3:
			printf("��Ʈ ������ �� ���� �Է� >> ");
			scanf("%d %d", &num1, &num2);

			printf("\n\t    x = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num1 >> i) & 1);

			}
			printf(" %d\n\n", num1);

			printf("\t    y = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num2 >> i) & 1);

			}
			printf(" %d\n\n", num2);

			printf("\tx ^ y = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", ((num1 ^ num2) >> i) & 1);

			}
			printf(" %d\n\n", num1 ^ num2);

			break;

		case 4:
			printf("��Ʈ ����(~) ������ �ϳ��� ���� �Է� >> ");
			scanf("%d", &num1);

			printf("\n\t    x = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num1 >> i) & 1);

			}
			printf("\n");

			printf("\t   ~x = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", ((~num1) >> i) & 1);

			}
			printf(" %d\n\n", ~num1);
			break;

		}

		printf("\n=================================================\n\n");
	}
}