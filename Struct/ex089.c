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
	printf("–¼‘O‚ğ“ü—Í");
	scanf("%s", puroh.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d %d %d", &puroh.birth[0], &puroh.birth[1], &puroh.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í");
	scanf("%s", &puroh.blood);
	printf("%s--%d”N%dŒ%d“ú¶ ŒŒ‰tŒ^-%sŒ^", puroh.name, puroh.birth[0], puroh.birth[1], puroh.birth[2], puroh.blood);

}