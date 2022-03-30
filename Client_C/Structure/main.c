#include <stdio.h>

// 구조체
// 여러 변수들을 멤버로 가지는 사용자 정의 자료형

// 형태
//struct 구조체자료형이름 {
//	 멤버 선언
//};

struct Coord
{
	int x;
	int y;
};

struct Student
{
	char name[20]; // 20byte
	int Korean, eng, math;// 12byte
	double average; // 8byte
};

int main() {
	struct Coord coord1;
	// . 연산자(멤버연산자)
	coord1.x = 4;
	coord1.y = 5;

	struct Coord coord2;
	coord2 = coord1;
	printf("좌표2: %d. %d \n", coord2.x, coord2.y);
	//구조체는 값 참조

	int a=1, b=5;
	int* ap = &a;
	int* bp = &b;

	ap = bp;
	*ap = 3;
	*bp = 8; // 둘 다 b값 바뀜

	// 구조체의 메모리 할당
	printf("Coord size : %d \n", sizeof(struct Coord));

	printf("Student size : %d \n", sizeof(struct Student));
	
	struct Student studentA;
	struct Student* studentP;
}