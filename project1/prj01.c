#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int sel1, sel2;
	double num;

	printf("���� ��������[��ȯ�� ����] --> [��ȯ��� ����]�� �����մϴ�.\n\n");

	printf(" [1] ����(m)  [2] ��ġ(in)  [3] ��Ʈ(ft)  [4] �ߵ�(yd)  [0] ����(stop)\n\n");

	printf("[��������] --> [��ȯ����], �� ���� �޴� ��ȣ�� �����ϼ���. >> ");
	scanf("%d %d", &sel1, &sel2);
	printf("\n");



	while (1) {

		printf("[��ȯ�Ҵ���]�� ���̸� �Է��ϼ���. >> ");
		scanf("%lf", &num);

		if (num == 0) {
			printf("�����մϴ�.\n");
			break;
		}

		if (sel1 == 1) {
			if (sel2 == 2) {
				printf(" [���] %.2lf(����) --> %.2lf(��ġ)\n\n", num, num*39.370079);
			}
			else if (sel2 == 3) {
				printf(" [���] %.2lf(����) --> %.2lf(��Ʈ)\n", num, num*3.28084);
			}
			else if (sel2 == 4) {
				printf(" [���] %.2lf(����) --> %.2lf(�ߵ�)\n", num, num*1.093613);
			}
		}
		else if (sel1 == 2) {
			if (sel2 == 1) {
				printf(" [���] %.2lf(��ġ) --> %.2lf(����)\n", num, num*0.0254);
			}
			else if (sel2 == 3) {
				printf(" [���] %.2lf(��ġ) --> %.2lf(��Ʈ)\n", num, num*0.083333);
			}
			else if (sel2 == 4) {
				printf(" [���] %.2lf(��ġ) --> %.2lf(�ߵ�)\n", num, num*0.027778);
			}
		}
		else if (sel1 == 3) {
			if (sel2 == 1) {
				printf(" [���] %.2lf(��Ʈ) --> %.2lf(����)\n", num, num*0.3048);
			}
			else if (sel2 == 2) {
				printf(" [���] %.2lf(��Ʈ) --> %.2lf(��ġ)\n", num, num * 12);
			}
			else if (sel2 == 4) {
				printf(" [���] %.2lf(��Ʈ) --> %.2lf(�ߵ�)\n", num, num*0.333333);
			}
		}
		else if (sel1 == 4) {
			if (sel2 == 1) {
				printf(" [���] %.2lf(�ߵ�) --> %.2lf(����)\n", num, num*0.9144);
			}
			else if (sel2 == 2) {
				printf(" [���] %.2lf(�ߵ�) --> %.2lf(��ġ)\n", num, num * 36);
			}
			else if (sel2 == 3) {
				printf(" [���] %.2lf(�ߵ�) --> %.2lf(��Ʈ)\n", num, num * 3);
			}
		}

	}

}
