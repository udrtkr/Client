#pragma warning (disable:4996)
#include <stdio.h>

int main() {
	// & �ּ� ������
	int a = 3;
	//scanf(%d, &a); a�� �ּҰ��� �����ض�

	printf("%d\n", &a);
	printf("%p\n", &a); //16���� �ּ� ���� hex 

	// * ���� ���� ������ 
	// �ּ� �տ� �پ� �ش� �ּҰ� ����
	// 
	// �������� ���� ���� ���� ���� R value ���

	printf("%d\n", *&a); // *�� �ּ� �տ�

	// * ������
	// �ڷ��� �ڿ� �ٿ� �ش� �ڷ����� �ּҸ� ����Ű�� �ڷ������� �ٱ�
	int* p;
	p = &a;
	printf("%d \n", p);

	double d = 1.23;
	double* pd;
	pd = &d;

	// �����ʹ� �� 4byte
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(pd));

	//�ּҰ� �տ� * ���̸� ���� ���


	return 0;
}