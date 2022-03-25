#pragma once

int sum(int a, int b);
int sub(int a, int b);
int div(int a, int b);
int mul(int a, int b);
int mod(int a, int b);

int factorial(int n);

int factorial(int n) {
	if (n < 1) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else
		return n * factorial(n-1);
}
