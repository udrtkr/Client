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

typedef struct _Student
{
	char name[20]; // 20byte
	int Korean, eng, math;// 12byte
	double average; // 8byte
} Student;

// 비트필드
// 메모리 낭비를 줄일 수 있는 방법, 첫번째부터 순차적으로 비트 할당
// 단, 값이 해당 비트수를 넘어가게되면 오버플로우 발생 유의해서 사용
struct Time
{
	unsigned int sec : 6; //LSB - Bit5 비트 6개 필요
	unsigned int min : 6; //Bit6 - Bit11
	unsigned int hour : 5; //Bit12 - Bit16
};

struct StudentList
{
	Student students[3];
	int num;
}studentList; // 전역 변수 구조체

//구조체 스왑 함수
void swapStudent(Student* student1, Student* student2) {
	Student tmpStudent = *student1;
	*student1 = *student2;
	*student2 = tmpStudent;
}

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

	printf("Student size : %d \n", sizeof(Student));
	
	Student studentA;
	Student* studentP;
	studentP = &studentA;

	strcpy(studentA.name, "Luke");
	studentA.eng = 80;
	studentA.Korean = 40;
	studentA.math = 60;
	studentA.average = (double)(studentA.eng + studentA.Korean + studentA.math) / 3;

	printf("%s \n", studentA.name);
	printf("%lf \n", studentA.average);

	//-> 연산자 (구조체 *포인터 변수의 멤버에 접근할 때)
	printf("%s \n", studentP->name);
	studentP->eng = 10;

	int* KoreanGrade = &studentA.Korean;

	//비트필드
	struct Time t1;
	printf("%d \n", sizeof(t1));

	t1.hour = 5;
	t1.min = 12;
	t1.sec = 80;
	printf("%d:%d:%d \n", t1.hour, t1.min, t1.sec);
	//unsigned int* tmpHour = &t1.hour; // 비트필드 주소엔 접근 불가능

	Student studentB =
	{
		{"Jerry"},
		{55},
		{66},
		{11},
		{(double){55+66+11}/3}
	};

	Student studentC =
	{
		{"Herry"},
		{55},
		{66},
		{11},
		{(double){55 + 66 + 11} / 3}
	};
	// 구조체를 멤버로 가지는 구조체
	studentList.num = 3;
	studentList.students[0] = studentA;
	studentList.students[1] = studentB;
	studentList.students[2] = studentC;
	printf("%d", studentList.students[0].eng);
	 
	

}