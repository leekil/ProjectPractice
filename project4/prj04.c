#include <stdio.h>

int main() {
	int ct;
	int count = 0;

	for (int i = 1; i <= 10; ) {

		for (int k = 1; k <= 257; k++) {

			ct = 0;
			for (int l = 1; l <= k; l++) {
				if (k % l == 0) ct++;
			}

			if (ct == 2) {
				if (count == 0) {
					for (int j = 10 - i; j >= 0; j--) {
						printf("  ");
					}
				}

				printf("%d  ", k);
				count++;

				if (count == i) {
					printf("\n");
					count = 0;
					i++;
				}
			}
		}
	}
}