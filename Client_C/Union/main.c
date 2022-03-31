#include <stdio.h>

typedef union _Jopinfo {
	char schooName[20];
	char companyName[20];
} Jopinfo;

typedef struct _Person
{
	char name[20];
	Jopinfo jobinfo;
} Person;

// 공용체 union
// union에서 가장 사이즈가 큰 멤버의 데이터 크기만큼 공간 할당
// 나머지 멤버들은 해당 공간을 공유 사용할일 별루 업대
typedef union _Jopinfo {
	char schooName[20];
	char companyName[20];
} Jopinfo;

int main() {
	Person a, b;

	strcpy(a.name, "Luke");
	strcpy(b.name, "Buke");

	strcpy(a.jobinfo.schooName, "KoreanSchool");
	strcpy(b.jobinfo.companyName, "KoreanCompany");
}