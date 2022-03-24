#include <stdio.h>

// 반환형 함수이름(매개변수자료형 매개변수이름, ...)
//{
//		연산내용
//		변환문 (return 변환값)
//}

// 지역변수 함수는 스택에 남지x

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
	//int tmpValue = a + b; // 지역변수는 중괄호 밖 같은 이름 변수보다 우선
	//printf("%d", tmpValue);

	// register 변수
	// 빠른 연산을 위해 register에 직접 할당
	// 컴파일러가 판단함
	register int tmpValue = a - b;

	return tmpValue;
}

int doSomething() {
	// static 정적 키워드, 이걸로 선언되면 동적 메모리할당이 불가능 프로그램이 끝날때까지 지워지지x
	static int localCount;// 정적 지역변수 해당 중괄호 안에서만 접근 가능, but 값 밖에서두 남아잇댜
	localCount++;
	globalCount++;
	printf("%d \n", localCount);
	printf("%d \n", globalCount);

	if (localCount < 10) {
		doSomething();//재귀함수 함수 내 동일 함수 호출
	}
	return 0;
}
