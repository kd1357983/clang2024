#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile puroh;
	printf("名前を入力");
	scanf("%s", puroh.name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d %d %d", &puroh.birth[0], &puroh.birth[1], &puroh.birth[2]);
	printf("血液型を入力");
	scanf("%s", &puroh.blood);
	printf("%s--%d年%d月%d日生 血液型-%s型", puroh.name, puroh.birth[0], puroh.birth[1], puroh.birth[2], puroh.blood);

}