#include <stdio.h>

// switch 경우 많을 때
// switch(조건 매개)
//	case 조건1:
//	case 조건...:
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
		break;// 케이스 안에서 반복x 끝낼 때 씀
	}
	printf("%d \n", sum);

	// 알파벳 부르기
	char character = 'A';
	switch (character)
	{
	case 'A':
		printf("%c ok \n", character);
		break; // 해당 반복문 종료
	case 'B':
		printf("%c not ok \n", character);
		return 0; // 해당 함수 종료 가능
	default:
		break;
	}
}