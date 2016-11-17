#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int sel1, sel2;
	double num;

	printf("다음 단위에서[변환할 단위] --> [변환결과 단위]로 연산합니다.\n\n");

	printf(" [1] 미터(m)  [2] 인치(in)  [3] 피트(ft)  [4] 야드(yd)  [0] 종료(stop)\n\n");

	printf("[이전단위] --> [변환단위], 두 개의 메뉴 번호를 선택하세요. >> ");
	scanf("%d %d", &sel1, &sel2);
	printf("\n");



	while (1) {

		printf("[변환할단위]의 길이를 입력하세요. >> ");
		scanf("%lf", &num);

		if (num == 0) {
			printf("종료합니다.\n");
			break;
		}

		if (sel1 == 1) {
			if (sel2 == 2) {
				printf(" [결과] %.2lf(미터) --> %.2lf(인치)\n\n", num, num*39.370079);
			}
			else if (sel2 == 3) {
				printf(" [결과] %.2lf(미터) --> %.2lf(피트)\n", num, num*3.28084);
			}
			else if (sel2 == 4) {
				printf(" [결과] %.2lf(미터) --> %.2lf(야드)\n", num, num*1.093613);
			}
		}
		else if (sel1 == 2) {
			if (sel2 == 1) {
				printf(" [결과] %.2lf(인치) --> %.2lf(미터)\n", num, num*0.0254);
			}
			else if (sel2 == 3) {
				printf(" [결과] %.2lf(인치) --> %.2lf(피트)\n", num, num*0.083333);
			}
			else if (sel2 == 4) {
				printf(" [결과] %.2lf(인치) --> %.2lf(야드)\n", num, num*0.027778);
			}
		}
		else if (sel1 == 3) {
			if (sel2 == 1) {
				printf(" [결과] %.2lf(피트) --> %.2lf(미터)\n", num, num*0.3048);
			}
			else if (sel2 == 2) {
				printf(" [결과] %.2lf(피트) --> %.2lf(인치)\n", num, num * 12);
			}
			else if (sel2 == 4) {
				printf(" [결과] %.2lf(피트) --> %.2lf(야드)\n", num, num*0.333333);
			}
		}
		else if (sel1 == 4) {
			if (sel2 == 1) {
				printf(" [결과] %.2lf(야드) --> %.2lf(미터)\n", num, num*0.9144);
			}
			else if (sel2 == 2) {
				printf(" [결과] %.2lf(야드) --> %.2lf(인치)\n", num, num * 36);
			}
			else if (sel2 == 3) {
				printf(" [결과] %.2lf(야드) --> %.2lf(피트)\n", num, num * 3);
			}
		}

	}

}
