#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	int sel;
	int dump;

	printf("��ȯ�� �� ������ �Է��ϼ���. >> ");
	scanf("%d %d", &x, &y);

	printf("�Է��� �� �� : x = %d and y = %d\n\n", x, y);

	printf(" �ӽ� ���� ��� [1]\n");
	printf(" ������ �������� ��ȯ ���[2]\n");
	printf(" ������ ���������� ��ȯ ���[3]\n");
	printf(" XOR ������ ^ �̿� ���[4]\n\n");

	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >> ");
	scanf("%d", &sel);

	switch (sel) {
	case 1:
		dump = x;
		x = y;
		y = dump;
		break;

	case 2:
		break;

	case 3:
		break;

	case 4:
		break;
	}

	printf("��ȯ�� �� �� : x = %d and y = %d\n", x, y);
}