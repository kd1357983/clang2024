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
		printf("名前を入力");
		scanf("%s",p->name);
		printf("生年月日を空白で区切って入力:");
		scanf("%d %d %d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("血液型を入力");
		scanf("%s", p->blood);
	}
	p = puroh;
	for (i = 0; i < SIZE; i++, p++) 
	{
		if (strcmp(p->blood, "A")==0) 
		{
			printf("%s--%d年%d月%d日生 血液型-%s型", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}