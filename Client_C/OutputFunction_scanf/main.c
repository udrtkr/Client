#include <stdio.h>

int main(void) {
	// scanf
	// scanf(���Ĺ��ڿ�, ��������)
	// �Է��� ���� �� ���� ����ϴ� �Լ� ������ ������ ����

	int n = 0;
	scanf_s("%d", &n);

	// &����������
	// ���� �տ� �پ� �ش� ���� �ּҰ� ����

	char str[20];
	scanf_s("%s", str, 10*sizeof(char));
	// sizeof(�ڷ���) : �ڷ��� �ش��ϴ� ������ ũ�� ��ȯ
}