#include <stdio.h>
#pragma warning (disable:4996)

void print_all_element(int* arr, int len) {
	for (int i=0; i < len; i++) {
		printf("%d\n", arr[i]);
	}
}

int main() {

	// 배열은 포인터
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	// arr[index]는 변수 형태
	printf("%d\n", &arr[0]); // index사이 4byte 차이

	// 배열의 연산
	printf("%d\n", *(arr + 4)); // 의미 arr 주소에 4*sizeof(arr자료형) , * arr주소에서부터 arr자료형 크기만큼 값 참조 4*4byte 뒤 주소값 
	
	int* p , * q;
	p = &arr[0];
	q = &arr[4];
	// 포인터간 덧셈 x
	// 차이는 인덱스 차이 반환
	// 결과값 음수면 인덱스*자료형byte 수 만큼 주소가 앞서있음
	printf("%p\n", p < q); //관게연산

	//포인터 덧셈
	printf("%d \n", *++p);

	int len = sizeof(arr)/sizeof(int);
	print_all_element(arr, len);


	return 0;
}