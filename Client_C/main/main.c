#include <stdio.h>

int main(void)
{
    float f = 1023645164;

    printf("%.30f \n", f);

    // 배열
    //=========================================
    //
    int arr1x_1[3] = {1, 3, 5};
    int arr1x_2[3] = {1, 3};
    double arr1x_3[3] = { 1.1,2.2,3.3 };
    printf("%d \n", arr1x_2[2]);

    // 2차원 배열
    // 배열[열][행]
    short arr2x_1[2][3] = { {1,1,1 },
                            {2, 2, 2} };
    short arr2x_2[2][3] = { 1,1,1,1,1,1 };
    short arr2x_3[][2] = { 1,2,3,4,5,6 };
    // 배열 초기화 시 열 크기 정해주면 컴파일러가 알아서 배열 크기 확보

    // 문자열
    // 배열 마지막에 null이 붙음
    char str1[20]= "hello"; // h e l l o null 확보 x
    printf("%c",str1[4]); 
    char str2[] = "hello";
    char str3[6] = { 'h','e','l','l','o','\0' }; // \0가 널문자 안넣어두 댐

    printf("%c\n", str3[0]);
    printf("%s", str2);

    // 함수 호출
    // 함수이름 (인자)

    // strcpy(문자열 변수, 문자열 값) : 문자열 변수에 문자열 값을 대입
    strcpy(str1, "I will meet you");
    printf("%s", str1);
    // strlen(문자열값) 문자열 길이 반환
    printf("%d\n", strlen(str1));
    // strcmp(문자열값1, 문자열값2) 문자열을 아스키코드로 변환 시
    // 문자열값1이 크면 양수 같으면 0 2가 더크면 -1 반환 매치
    printf("%d", strcmp(str1, str2));

    // const
    // const 로 정의된 변수는 초기화 이후 값 수정x 무조건 상수
    // -----------------
    const int gaolPosition = 200;
    // LValue RValue
    // 대입연산자 기준 왼쪽 오른쪽 값
    //-------------------

    // 변수 선언 유의점
    // 1. 키워드 와 다른 식별자 이름
    // 2. 식별자 이름 알파벳, 아라비아, _(언더바) 단어 단어 사이 사용
}