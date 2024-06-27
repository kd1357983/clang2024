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
	struct profile data[SIZE] = { { "âŒûŒ÷ˆê‚P¢", 2000, 1, 1, "A" },
								{ "âŒûŒ÷ˆê‚Q¢", 1999, 3, 28, "B" },
								{ "âŒûŒ÷ˆê‚R¢", 1998, 5, 1, "O" },
								{ "âŒûŒ÷ˆê‚S¢", 1997, 12, 31, "AB"},
								{ "âŒûŒ÷ˆê‚T¢", 1996, 2, 1, "A" } };
	struct profile* p;
	int i;
	p = data;
	for (i = 0; i < SIZE; i++, p++) 
	{
		if (p->birth.tuki==2)
		{
			printf("%s--%d”N%dŒ%d“ú¶ ŒŒ‰tŒ^-%sŒ^\n", p->name, p->birth.nen,p->birth.tuki,p->birth.hi,p->blood);
		}
	}
}