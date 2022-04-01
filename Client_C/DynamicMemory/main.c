#include <stdio.h>
#include <stdlib.h> // 동적 할당 함수들이 있는 헤더파일
// 동적 메모리 할당 (힙 영역에 메모리 동적 할당)
// malloc(할당 메모리 byte 크기)
// 배열 크기나 다양한 종류나 값 할당되어야 할 때 조건에 따라 맞는 크기 확보
// 
// 동적으로 메모리 할당 후 0으로 초기화
// 
// calloc(할당할 메모리 단위 수, 할당할 메모리 단위 크기)
// 
// 쓰는 이유:
// 할당한 후 쓰레기값 들어있으면 안될때
// 
// realloc
// 동적으로 할당된 메모리 할당 크기 조절
// 이미 할당했지만 할당한 공간의 크기 변경 & 주소 유지
// realloc(포인터, 변경할 메모리 byte 크기)
// null일 경우 malloc과 똑같이 동작
//
int main() {
	int* p;
	
	p = (int*)malloc(sizeof(int)); // 4byte 할당
	
	if (p == NULL) exit(1); // NULL 포인터는 문제o 이므로 exit

	printf("%d \n", *p);
	int* p2, a = 0;
	p2 = &a;


	// 그냥 포인터는 스택영역의 주소라 free 안해도 댐 알아서 해제댐
	// 동적 할당은 힙 영역의 메모리라 free 해야댐

	// calloc
	int count = 16;
	p = calloc(16, sizeof(int)); // 나머지 배열에 쓰레기값 x
	//p = malloc(16 * sizeof(int));
	p[0] = 4;
	p[1] = 3;
	p[2] = 2;
	p[3] = 1;
	p[4] = 0;
	for (int i = 0; i < count; i++) {
		printf("%d ", p[i]);
	}
	p=(int*)realloc(p, count * sizeof(int));

	// free
	// 인자로 넣어준 포인터의 값(주소)에 접근해서 메모리 해제
	free(p);

	return 0;
}
