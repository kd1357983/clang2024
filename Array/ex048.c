#include<stdio.h>
main()
{
	int k, j, i,gokei;
	int data[1][1][2] = { {{3,4,5},{4,5,6} } {{2,2,3},{2,5,6}} };
	printf("�A�p�[�g");
	for(i=0,j=0,k=0;k<=1;k++){
		printf("�A�p�[�g%d", k);
	for (i = 0,j = 0; j <= 1; j++) {
		printf("%d�K",j);


		for (i = 0; i <= 2; i++) {
			printf("%2d", data[k][j][i]);
			gokei += data[k][j][i];
		}
	}
	printf("\n");
}
	printf("�S�̂�%d�l���Z��ł��܂�", gokei);
}