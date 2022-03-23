#include <stdio.h>

int main() {
	for (int i = 0;; i++) {

		if (i < 5) {
			printf("%d \n", i);
			continue; // 바로 for 문으로 돌아감
		}
		else {
			printf("\n");
		}

		if (i > 10) {
			printf("10 \n");
			break;
		}
		printf("going \n");
	}
	return 0;
}