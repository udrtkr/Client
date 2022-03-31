#include <stdio.h>

// ����ü
// ���� �������� ����� ������ ����� ���� �ڷ���

// ����
//struct ����ü�ڷ����̸� {
//	 ��� ����
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

// ��Ʈ�ʵ�
// �޸� ���� ���� �� �ִ� ���, ù��°���� ���������� ��Ʈ �Ҵ�
// ��, ���� �ش� ��Ʈ���� �Ѿ�ԵǸ� �����÷ο� �߻� �����ؼ� ���
struct Time
{
	unsigned int sec : 6; //LSB - Bit5 ��Ʈ 6�� �ʿ�
	unsigned int min : 6; //Bit6 - Bit11
	unsigned int hour : 5; //Bit12 - Bit16
};

struct StudentList
{
	Student students[3];
	int num;
}studentList; // ���� ���� ����ü

//����ü ���� �Լ�
void swapStudent(Student* student1, Student* student2) {
	Student tmpStudent = *student1;
	*student1 = *student2;
	*student2 = tmpStudent;
}

int main() {
	struct Coord coord1;
	// . ������(���������)
	coord1.x = 4;
	coord1.y = 5;

	struct Coord coord2;
	coord2 = coord1;
	printf("��ǥ2: %d. %d \n", coord2.x, coord2.y);
	//����ü�� �� ����

	int a=1, b=5;
	int* ap = &a;
	int* bp = &b;

	ap = bp;
	*ap = 3;
	*bp = 8; // �� �� b�� �ٲ�

	// ����ü�� �޸� �Ҵ�
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

	//-> ������ (����ü *������ ������ ����� ������ ��)
	printf("%s \n", studentP->name);
	studentP->eng = 10;

	int* KoreanGrade = &studentA.Korean;

	//��Ʈ�ʵ�
	struct Time t1;
	printf("%d \n", sizeof(t1));

	t1.hour = 5;
	t1.min = 12;
	t1.sec = 80;
	printf("%d:%d:%d \n", t1.hour, t1.min, t1.sec);
	//unsigned int* tmpHour = &t1.hour; // ��Ʈ�ʵ� �ּҿ� ���� �Ұ���

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
	// ����ü�� ����� ������ ����ü
	studentList.num = 3;
	studentList.students[0] = studentA;
	studentList.students[1] = studentB;
	studentList.students[2] = studentC;
	printf("%d", studentList.students[0].eng);
	 
	

}