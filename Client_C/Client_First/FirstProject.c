// # : 전처리기, 해당 소스코드 파일; 컴파일 진행 전 처리할 내용에 대해 입력
#include <stdio.h> // 헤더파일 선언

// 주석 단축키 : Ctrl + k, c , Ctrl + Shift +Slash
// 주석 해제 단축키 : Ctrl + k, u
// alt + shift 화살표 방향키 다중라인

// main 실행시 가장 먼저 호출되는 함수, 없으면 컴파일 안됨

// 함수 기본형태
// "출력형태" "함수이름" (매개변수)
// 매개변수 없고 int형 출력
int main(void) 
{
	printf("hello sanz");
	printf("%d \n",1128);
	return 0;
	// 0반환 시 해당 함수가 끝났다는 것을 상위 함수에 알려줌
	// 함수가 기능을 수행한 후 문제 있으면 0이 아닌 지정된 숫자 반환하는 방식으로 사용
}

int sum(int a, int b) {
	return a + b;
}