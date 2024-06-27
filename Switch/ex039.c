#include<stdio.h>
main()
{
	char moji;
	int no1, no2, no3;
	printf("処理を入力：");
	scanf("%c", &moji);
	printf("整数を入力：");
	scanf("%d %d %d", &no1, &no2, &no3);
	switch (moji) {
	case 'd':
		case'D': if (no1 < no2)
		{
			if (no2 > no3)
			{
				printf("最大値は%dです", no2);
			}
			else 
			{
				printf("最大値は%dです", no3);
			}
			   else 
		{
			if (no1 > no3)
			{
				printf("最大値は&dです", no1);
			}
			else 
			{
				printf("最大値は%dです", no3);
			}
		}
		}
		break;
		case 's':
		case'S':if (no1 > no2)
		{
			if (no2 > no3)
			{
				printf("最小値は%dです", no3);
			}
			else {
				printf("最小値は%dです", no2);
			}
			   else {
			if (no1>no3) {
				printf("最小値は&dです", no3);
			}
			else {
				printf("最小値は%dです", no1);
			}
		}
		}
		break;
		case 'g':
		case'G': printf("合計は%dです", no1 + no2 + no3);
			break;
		case 'h':
			case'H': printf("平均は%dです", (no1 + no2 + no3) / 3);
				break +
			default: printf("エラー");
	}
}