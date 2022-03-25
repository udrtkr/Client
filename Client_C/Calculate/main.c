#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996) //scanf

int OperationCount = 0;



int main(void) {
	int str[4];
	int a, b;
	
	


	while (1) 
	{
		int isOperated = 1;

		printf("plz choice \n");
		scanf("%s", str);

		printf("a = \n");
		scanf("%d", &a);

		printf("b = \n");
		scanf("%d", &b);
		printf("%d");

		if (!strcmp("sum", str)) {
			sum(a, b);
		}
		else if (!strcmp("sub", str)) {
			sub(a, b);
		}
		else if (!strcmp("div", str)) {
			div(a, b);
		}
		else if (!strcmp("mul", str)) {
			mul(a, b);
		}
		else if (!strcmp("mod", str)) {
			mod(a, b);
		}
		else {
			printf("x");
			isOperated = 0;
		}
		OperationCount += isOperated;
		printf("Ope %d \n", OperationCount);
	}
	
	return 0;

}

int sum(int a, int b) {
	int sumN = a + b;
	//OperationCount++;
	printf("sum = %d", sumN);
	return sumN;
}
int sub(int a, int b) {
	int subN = a - b;
	//OperationCount++;
	printf("sub = %d", subN);
	return subN;
}
int div(int a, int b) {
	int divN = a / b;
	//OperationCount++;
	printf("div = %d", divN);
	return divN;
}
int mul(int a, int b) {
	int mulN = a * b;
	//OperationCount++;
	printf("mull = %d", mulN);
	return mulN;
}
int mod(int a, int b) {
	int modN = a % b;
	//OperationCount++;
	printf("mod = %d", modN);
	return modN;
}