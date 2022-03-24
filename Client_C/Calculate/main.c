#include <stdio.h>


int OperationCount = 0;

int main(void) {
	char str[4];
	int a, b;
	pritnf("plz choice \n");
	scanf_s("%s \n", str, 3 * sizeof(char));
	scanf_s("a = %d",&a);
	scanf_s("b = %d", &b);
	if (*str = "sum") {
		sum(a, b);
	}
	else if (*str = "sub") {
		sub(a, b);
	}
	else if (*str = "div") {
		div(a, b);
	}
	else if (*str = "mul") {
		mul(a, b);
	}
	else if (*str = "mod") {
		mod(a, b);
	}

}

int sum(int a, int b) {
	int sumN = a + b;
	OperationCount++;
	printf("%d", sumN);
	return sumN;
}
int sub(int a, int b) {
	int subN = a - b;
	OperationCount++;
	printf("%d", subN);
	return subN;
}
int div(int a, int b) {
	int divN = a / b;
	OperationCount++;
	printf("%d", divN);
	return divN;
}
int mul(int a, int b) {
	int mulN = a * b;
	OperationCount++;
	printf("%d", mulN);
	return mulN;
}
int mod(int a, int b) {
	int modN = a % b;
	OperationCount++;
	printf("%d", modN);
	return modN;
}