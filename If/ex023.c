#include<stdio.h>
main()
{
	int no, hunn, byou, zikan, zikanamari;
	printf("�b������́F");
	scanf("%d", &no);
	zikan = no / 3600;
	zikanamari = no % 3600;
	hunn = zikanamari / 60;
	byou = zikanamari % 60;

	if ( no <= 5000) {
		printf("%d����%d��%d�b�ł�", zikan, hunn, byou);
	}
	else {
		printf("error");

	}
	if
}
