#include<stdio.h>
main()
{
	int no,gokei;
	float count;
	printf("���́H", no);
	scanf("%d",&no);
	for (gokei = 0, count = 0; no != -999; count++)
	{
		gokei += no;
		printf("���́H", no);
		scanf("%d",&no);
	}
	if (count == 0) {
		printf("���v��%d   ���ρ�%.2f", gokei, gokei / (count + 1));
	}
	else

	{
		printf("���v��%d        ���ρ�%.2f", gokei, gokei / count);
	}
}