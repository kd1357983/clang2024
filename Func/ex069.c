#include<stdio.h>
main()
{
	int i, gokei, ave,flg;
	gokei = 0, ave = 0, flg = 0;
	printf("�����F");
	while (scanf("%d", &i) != EOF)
	{
		gokei += i;
		ave++;
		printf("�����F");
		flg = 1;
	}
	if (flg == 1) {
		printf("���v=%d\t���ρ�%.2f", gokei, gokei / (float)ave);
	}
	if (flg == 0) {
		printf("���v���O\t���ρ��O");
	}
}
//{
//	int num, sum, cnt;
//	sum = cnt = 0;
//	printf("����:");
//	while (scanf("%d", &num) != EOF) {
//		sum += num;
//		cnt++;
//		printf("����:");
//	}
//	printf("���v=%d ����=%.2f\n", sum, (float)sum / cnt);
//}