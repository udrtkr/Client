#pragma warning (disable:4996)
#include <stdio.h>

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	// �ּ� : �޸� ����

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
	// �ڷ��� �ڿ� �ٿ� �ش� �ڷ����� �ּҸ� ����Ű�� �ڷ������� �ٱ� �ڷ��� ��� ���� �޸𸮴� �� 4byte = 32bit
	int* p;
	p = &a;
	printf("%lf \n", p);

	double d = 1.23;
	double* pd;
	pd = &a;

	// �����ʹ� �� 4byte
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(pd));

	double* pd1, * pd2, d1, d2;
	d1 = 2.0;
	d2 = 4.0;
	pd1 = &d1;
	pd2 = &d2;
	// ���Կ����� ���� �ʰ� �� �װ� �������� 6�� ����� �� �ִ�
	// 4���� ���
	printf("%lf \n", d1 + d2);
	printf("%lf \n", *pd1 + *pd2);
	printf("%lf \n", d1 + *pd2);
	printf("%lf \n", d2 + *pd1 );

	printf("%lf \n", *pd1);// ����� �� ���
	//scanf("%lf \n", pd1); // �Է��� �ּҰ���

	// ����� ������
	// ���� const �ڷ���*
	// �����͸� �ٲܼ� ���°� �ƴ϶� �����Ͱ� ����Ű�� �ش� �ּ��� ���� �ٲܼ� ��
	// �������������� L-value ���x
	int n1 = 0, n2 = 0;
	const int* pa = &n1;
	pa = &n2; //���� x �ּҰ��� �״��
	//*pa = 20; �Ұ���

	const int n3 = 0; // �� �ٲ��� ����
	int* pn3 = &n3;
	*pn3 = 3; // ���������� ���� �����ϸ� const���� n3 �ĺ��ڸ� ��ġġ �ʾ� n3 �ּҰ� ���� ����

	//�ּҰ� �տ� * ���̸� ���� ���

	// �ٸ� �ڷ��� �����Ͱ��� ���� ����
	// L-value ������ �ڷ����� �� ũ�� ����
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

	int* pc = NULL; // ���� �̷��� ���
	if (pc != NULL)
		printf("%d" ,pc);

	// �����͸� ����ϴ� ����
	// swap
	int _a = 1, _b = 2;
	swap(_a, _b); // ���� �� �ٲ��� x ����������
	printf("%d %d \n", _a, _b);

	return 0;
}

