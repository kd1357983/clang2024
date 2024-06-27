#include<stdio.h>
#include<string.h>
#define SIZE 5
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile puroh[SIZE];
	struct profile* p = puroh;
	int i;
	for (i = 0; i < SIZE; i++,p++) 
	{
		printf("–¼‘O‚ð“ü—Í");
		scanf("%s",p->name);
		printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
		scanf("%d %d %d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("ŒŒ‰tŒ^‚ð“ü—Í");
		scanf("%s", p->blood);
	}
	p = puroh;
	for (i = 0; i < SIZE; i++, p++) 
	{
		if (strcmp(p->blood, "A")==0) 
		{
			printf("%s--%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^-%sŒ^", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}