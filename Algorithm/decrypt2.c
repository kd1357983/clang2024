#include<stdio.h>
main()
{
	char moji[80];
	int key, i, j;
	printf("���������͂��Ă�������");
	scanf("%s", &moji[0]); 
	for (i = 0; moji[i] != '\0'; i++) {
		printf("moji[%d]�̕������L�[", i);
		scanf("%d",&key);
		moji[i] = moji[i] - key;
	}
	printf("�������ς݂̕�����́A%s",&moji[0]);
}