#include <stdio.h>
#pragma warning (disable:4996)

int GetFactorial(int n);
double sum(double a, double b);
double sub(double a, double b);
double div(double a, double b);
double mul(double a, double b);
double end(double a, double b);

int main() {
	// �Լ� ������ ����
	// ��ȯ�� (*�Լ������ͺ����̸�)(�Ķ����1�ڷ���(�Ķ����),...
	int (*pf)(int) = GetFactorial;
	// pf = GetFactorial;

	printf("%d\n", GetFactorial(5));
	printf("%d\n", pf(5));

	// ����
	double (*pOP)(double, double) = NULL;
	char op[20]; // ��ɾ� �Է��� ���� ���ڿ�
	printf("���� ��ɾ� �Է� \n");
	scanf("%s", op);
	double a, b = 0;
	printf("a b �Է� \n");
	scanf("%lf %lf", &a, &b);

	if (!strcmp("sum", op)) {
		pOP = sum;
	}
	else if (!strcmp("sub", op)) {
		pOP = sub;
	}
	else if (!strcmp("div", op)) {
		pOP = div;
	}
	else if (!strcmp("mul", op)) {
		pOP = mul;
	}
	else {
		pOP = end;
		printf("\n");
	}
	if (op != NULL)
	{
		printf("���� ����� %lf \n", pOP(a, b));
	}

	return 0;
}

int GetFactorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++ ) {
		fact *= i;
	}
	return fact;
}

double sum(double a, double b) {
	double sumN = a + b;
	//OperationCount++;
	//printf("sum = %d", sumN);
	return sumN;
}
double sub(double a, double b) {
	double subN = a - b;
	//OperationCount++;
	//printf("sub = %d", subN);
	return subN;
}
double div(double a, double b) {
	double divN = a / b;
	//OperationCount++;
	//printf("div = %d", divN);
	return divN;
}
double mul(double a, double b) {
	double mulN = a * b;
	//OperationCount++;
	//printf("mull = %d", mulN);
	return mulN;
}
double end(double a, double b) {
	double endN = 0;
	printf("�ٽ�");
	return 0;
}