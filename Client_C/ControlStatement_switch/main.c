#include <stdio.h>

// switch ��� ���� ��
// switch(���� �Ű�)
//	case ����1:
//	case ����...:
//	default:

int main() {
	int n = 1;
	int sum = 0;
	switch (n)
	{
	case 1:
		sum += 1;
	case 2:
		sum += 2;
	default:
		break;// ���̽� �ȿ��� �ݺ�x ���� �� ��
	}
	printf("%d \n", sum);

	// ���ĺ� �θ���
	char character = 'A';
	switch (character)
	{
	case 'A':
		printf("%c ok \n", character);
		break; // �ش� �ݺ��� ����
	case 'B':
		printf("%c not ok \n", character);
		return 0; // �ش� �Լ� ���� ����
	default:
		break;
	}
}