#include <stdio.h>
// While : 특정 조건에 따라 내용 반복 제어
// do while 
// do{ 조건 참일때 반복 }while(조건)
int main() {
	// 조건이 항상 참인 반복문은 무한 루프
	while (0)
	{
		printf("sanz \n");1
		continue; // 가장 가까운 반복문 찾아 해당 반복문 조건 비교줄로 돌아감
		printf("coco \n");
		break; // 반복문 바로 종료
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