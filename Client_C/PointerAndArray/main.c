#include <stdio.h>
#pragma warning (disable:4996)

void print_all_element(int* arr, int len) {
	for (int i=0; i < len; i++) {
		printf("%d\n", arr[i]);
	}
}

int main() {

	// �迭�� ������
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	// arr[index]�� ���� ����
	printf("%d\n", &arr[0]); // index���� 4byte ����

	// �迭�� ����
	printf("%d\n", *(arr + 4)); // �ǹ� arr �ּҿ� 4*sizeof(arr�ڷ���) , * arr�ּҿ������� arr�ڷ��� ũ�⸸ŭ �� ���� 4*4byte �� �ּҰ� 
	
	int* p , * q;
	p = &arr[0];
	q = &arr[4];
	// �����Ͱ� ���� x
	// ���̴� �ε��� ���� ��ȯ
	// ����� ������ �ε���*�ڷ���byte �� ��ŭ �ּҰ� �ռ�����
	printf("%p\n", p < q); //���Կ���

	//������ ����
	printf("%d \n", *++p);

	int len = sizeof(arr)/sizeof(int);
	print_all_element(arr, len);


	return 0;
}