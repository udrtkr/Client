#pragma warning (disable:4996)
#include <stdio.h>

int main() {
	// & 주소 연산자
	int a = 3;
	//scanf(%d, &a); a의 주소값에 저장해라

	printf("%d\n", &a);
	printf("%p\n", &a); //16진수 주소 형태 hex 

	// * 간접 참조 연산자 
	// 주소 앞에 붙어 해당 주소값 참조
	// 
	// 직접참조 값을 직접 참조 변수 R value 사용

	printf("%d\n", *&a); // *은 주소 앞에

	// * 포인터
	// 자료형 뒤에 붙여 해당 자료형을 주소를 가리키는 자료형으로 바굼
	int* p;
	p = &a;
	printf("%d \n", p);

	double d = 1.23;
	double* pd;
	pd = &d;

	// 포인터는 다 4byte
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(pd));

	//주소값 앞에 * 붙이면 변수 출력


	return 0;
}