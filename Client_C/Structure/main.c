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

struct Student
{
	char name[20]; // 20byte
	int Korean, eng, math;// 12byte
	double average; // 8byte
};

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

	printf("Student size : %d \n", sizeof(struct Student));
	
	struct Student studentA;
	struct Student* studentP;
}