#include<stdio.h>
void keisan(int a, int b, int *gokei, float *ave);
main()
{
	int a,b,c;
	
	float d;

	printf("�������Q����:");
	scanf("%d%d", &a, &b);
	keisan(a, b,&c,&d);
	printf("���v��%d�A���ς�%.2f" ,c,d);
}
void keisan(int a, int b, int *gokei, float *ave)
{
	*gokei = a + b;
	*ave = *gokei / 2;
}