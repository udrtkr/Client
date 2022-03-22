#include <stdio.h>
int main(void) {

	// 대입연산자
	// 연산자 기준 오른쪽 값을 왼쪽 메모리에 할당함
	//---------------------------------
	int intResult = 0;
	double doubleResult = 0.0;

	// 산술 연산자 
	// ----------------

	// + 
	// -
	// *
	// /
	// % 정수연산만 가능

	// 부호 연산자
	// + - 붙여
	// ------------------

	// 복합 대입 연산자
	// -----------------
	// 대입연산자
	intResult += 4;

	// 증감연산자 
	// a++ a-- 후위 증감
	// ++a --a 전위 증감

	//관계 연산자 
	// true = 1 false = 0
	//---------------

	// 논리 연산자
	// ------------------
	// && || !
	// 피연산자 두 개 따져 true = 1 false = 0

	// 비트 연산자
	// & |  ^(xor) 다르면1같으면0  ~
	
	// 비트 shift
	// << overflow bit 사라짐
	// >> (5 >> 3)

	// 삼항연산자 조건 ? 참일때 결과 : 거짓일때 결과
	
	// ,(콤마 연산자)
	//----------------------------
	int commaResult = 0;
	int a = 0, b = 0;
	commaResult = a = 3, b = 4;

	// sizeof()
	// 메모리 크기를 바이트단위로 계산해서 반환
	int size_int = sizeof(int);
	int size_size_int = sizeof(size_int);
	printf("%d %d \n", size_int, size_size_int);

	// 형변환 연산자
	// ----------------------------
	// 암시적 자동으로 변환
	int num1_int = 10;
	double num_double = 12.32;
	short num_short = 2;
	char num_char = 4;
	// 연산을 하기 위해 레지스터에 데이터 전달 시 int형 변환된 채로 연산하게 됨
	// 
	printf("%d \n", sizeof(num_short + num_char));

	// 오버플로우에 의한 암시적 형변환

	// 명시적
	// 데이터 형 적어 변환
	int n;
	float f;
	f = 5 / 3;
	n = (int)(3.7 + 7.7);
	
}