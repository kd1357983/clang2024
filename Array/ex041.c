#include<stdio.h>
main()
{
	int i;
	float  box[3],gokei;
	gokei = 0;
	for (i = 0; i <= 2; i++) {
		printf("���������:");
		scanf("%f",&box[i]);
	
		gokei += box[i];
	}
	printf("���v��%f�ł�", gokei);
	printf("���ς�%f�ł�", gokei / 3);
}