#include <stdio.h>

int main() {
	for (int i = 0;; i++) {

		if (i < 5) {
			printf("%d \n", i);
			continue; // �ٷ� for ������ ���ư�
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