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
	printf("���O�����");
	scanf("%s", puroh.name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d %d %d", &puroh.birth[0], &puroh.birth[1], &puroh.birth[2]);
	printf("���t�^�����");
	scanf("%s", &puroh.blood);
	printf("%s--%d�N%d��%d���� ���t�^-%s�^", puroh.name, puroh.birth[0], puroh.birth[1], puroh.birth[2], puroh.blood);

}