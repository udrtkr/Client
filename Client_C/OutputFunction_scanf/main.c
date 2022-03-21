#include <stdio.h>

int main(void) {
	// scanf
	// scanf(서식문자열, 변수참조)
	// 입력이 들어올 때 까지 대기하는 함수 들어오면 변수값 참조

	int n = 0;
	scanf("%d", &n);

	// &참조연산자
	// 변수 앞에 붙어 해당 변수 주소값 참조

	char str[20];
	scanf_s("%s", str, 10*sizeof(char));
	// sizeof(자료형) : 자료형 해당하는 데이터 크기 반환
}