#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	int sel;
	int dump;

	printf("교환할 두 정수를 입력하세요. >> ");
	scanf("%d %d", &x, &y);

	printf("입력한 두 수 : x = %d and y = %d\n\n", x, y);

	printf(" 임시 저장 장소 [1]\n");
	printf(" 덧셈과 뺄셈으로 교환 방법[2]\n");
	printf(" 곱셈과 나눗셈으로 교환 방법[3]\n");
	printf(" XOR 연산자 ^ 이용 방법[4]\n\n");

	printf("위 교환 방법 중 한 번호를 선택하세요. >> ");
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

	printf("교환한 두 수 : x = %d and y = %d\n", x, y);
}