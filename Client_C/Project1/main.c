#include <stdio.h>
// While : Ư�� ���ǿ� ���� ���� �ݺ� ����
// do while 
// do{ ���� ���϶� �ݺ� }while(����)
int main() {
	// ������ �׻� ���� �ݺ����� ���� ����
	while (0)
	{
		printf("sanz \n");1
		continue; // ���� ����� �ݺ��� ã�� �ش� �ݺ��� ���� ���ٷ� ���ư�
		printf("coco \n");
		break; // �ݺ��� �ٷ� ����
	}
	printf("over \n");

	int count = 0;
	while (count < 5)
	{
		count++;
		printf("%d \n", count);
	}

	do {
		printf("do \n");
	} while (0);

	return 0;
}