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

// ����ü union
// union���� ���� ����� ū ����� ������ ũ�⸸ŭ ���� �Ҵ�
// ������ ������� �ش� ������ ���� ������� ���� ����
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