#include<stdio.h>
main()
{
	int no, no2, no3;

	printf("������3����:");
	scanf("%d%d%d", &no, &no2, &no3);
	printf("���v��%d", no + no2 + no3);
	printf("   ���ρ�%.2f", (float)(no + no2 + no3) / 3);
}