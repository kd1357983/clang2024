#include<stdio.h>
#include<string.h>
#define SIZE 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[30];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile data[SIZE] = { { "�������P��", 2000, 1, 1, "A" },
								{ "�������Q��", 1999, 3, 28, "B" },
								{ "�������R��", 1998, 5, 1, "O" },
								{ "�������S��", 1997, 12, 31, "AB"},
								{ "�������T��", 1996, 2, 1, "A" } };
	struct profile* p;
	int i;
	p = data;
	for (i = 0; i < SIZE; i++, p++) 
	{
		if (p->birth.tuki==2)
		{
			printf("%s--%d�N%d��%d���� ���t�^-%s�^\n", p->name, p->birth.nen,p->birth.tuki,p->birth.hi,p->blood);
		}
	}
}