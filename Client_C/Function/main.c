#include <stdio.h>

// ��ȯ�� �Լ��̸�(�Ű������ڷ��� �Ű������̸�, ...)
//{
//		���곻��
//		��ȯ�� (return ��ȯ��)
//}

// �������� �Լ��� ���ÿ� ����x

int globalCount = 0;

int main() {

	doSomething();
	int a;
	int b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	sum(a, b);
	return 0;
	
}

int sum(int a, int b) {
	//int tmpValue = a + b; // ���������� �߰�ȣ �� ���� �̸� �������� �켱
	//printf("%d", tmpValue);

	// register ����
	// ���� ������ ���� register�� ���� �Ҵ�
	// �����Ϸ��� �Ǵ���
	register int tmpValue = a - b;

	return tmpValue;
}

int doSomething() {
	// static ���� Ű����, �̰ɷ� ����Ǹ� ���� �޸��Ҵ��� �Ұ��� ���α׷��� ���������� ��������x
	static int localCount;// ���� �������� �ش� �߰�ȣ �ȿ����� ���� ����, but �� �ۿ����� �����մ�
	localCount++;
	globalCount++;
	printf("%d \n", localCount);
	printf("%d \n", globalCount);

	if (localCount < 10) {
		doSomething();//����Լ� �Լ� �� ���� �Լ� ȣ��
	}
	return 0;
}
