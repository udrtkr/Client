#include <stdio.h>
#pragma warning (disable:4996)

void RefreshMaxAndMin(int* arr, int size, int** maxPtr, int** minPtr) {
	for (int i = 0; i < size-1; i++) {
		if (arr[i] > arr[i + 1]) {
			*maxPtr = &arr[i];
			*minPtr = &arr[i + 1];
		}
	}
}

void RefreshMaxAndMin2(int* arr, int size, int** maxPtr, int** minPtr) {
	int* max, * min;
	max = min = &arr[0]; // max = arr두 가능

	for (int i = 0; i < size; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min < arr[i]) {
			min = &arr[i];
		}
	}
	maxPtr = &max;
	minPtr = &min;
}

int main(void) {
	int a = 3;
	int* p = &a;
	int** pp = &p;

	printf("%p\n", p);
	printf("%p\n", pp);

	printf("%d\n", *p);
	printf("%d\n", **pp);

	printf("%p\n", &pp);

	int* maxPtr;
	int* minPtr;
	int arr[5] = { 3,4,8,1,6 };
	// 함수에서
	// maxPtr은 arr의 가장 큰 값
	// minPtr은 arr의 가장 작은값
	int size = sizeof(arr) / sizeof(int);
	RefreshMaxAndMin(arr, size, &maxPtr, &minPtr);

	printf("max %d min %d", *maxPtr, *minPtr);


	return 0;
}