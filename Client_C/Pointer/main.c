#pragma warning (disable:4996)
#include <stdio.h>

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	// 주소 : 메모리 번지

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
	// 자료형 뒤에 붙여 해당 자료형을 주소를 가리키는 자료형으로 바굼 자료형 상관 없이 메모리는 다 4byte = 32bit
	int* p;
	p = &a;
	printf("%lf \n", p);

	double d = 1.23;
	double* pd;
	pd = &a;

	// 포인터는 다 4byte
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(pd));

	double* pd1, * pd2, d1, d2;
	d1 = 2.0;
	d2 = 4.0;
	pd1 = &d1;
	pd2 = &d2;
	// 대입연산자 쓰지 않고 위 네개 조합으로 6을 출력할 수 있는
	// 4가지 경우
	printf("%lf \n", d1 + d2);
	printf("%lf \n", *pd1 + *pd2);
	printf("%lf \n", d1 + *pd2);
	printf("%lf \n", d2 + *pd1 );

	printf("%lf \n", *pd1);// 출력은 값 출력
	//scanf("%lf \n", pd1); // 입력은 주소값에

	// 상수형 포인터
	// 형태 const 자료형*
	// 포인터를 바꿀수 없는게 아니라 포인터가 가르키는 해당 주소의 값을 바꿀수 없
	// 간접참조연산을 L-value 사용x
	int n1 = 0, n2 = 0;
	const int* pa = &n1;
	pa = &n2; //에러 x 주소값이 그대로
	//*pa = 20; 불가능

	const int n3 = 0; // 값 바꾸지 못함
	int* pn3 = &n3;
	*pn3 = 3; // 간접참조를 통해 접근하면 const지만 n3 식별자를 거치치 않아 n3 주소값 수정 가능

	//주소값 앞에 * 붙이면 변수 출력

	// 다른 자료형 포인터간의 대입 가능
	// L-value 포인터 자료형이 더 크면 위험
	int _n = 3;
	double _d = 2.5;
	int* _p = &_n;
	double* _pd = &_d;

	printf("p = %p \n", _p);
	printf("pd = %p \n", _pd);
	_p = _pd;
	printf("p = %p \n", _p);
	*_p = 3;
	printf("p = %p \n", _p);
	_pd = _p;
	*_pd = 3.5;

	int* pc = NULL; // 보통 이렇게 명시
	if (pc != NULL)
		printf("%d" ,pc);

	// 포인터를 사용하는 이유
	// swap
	int _a = 1, _b = 2;
	swap(_a, _b); // 둘이 값 바뀌지 x 지역변수라
	printf("%d %d \n", _a, _b);

	return 0;
}

