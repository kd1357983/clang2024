#include<stdio.h>
main()
{
	char moji;
	int no1, no2, no3;
	printf("��������́F");
	scanf("%c", &moji);
	printf("��������́F");
	scanf("%d %d %d", &no1, &no2, &no3);
	switch (moji) {
	case 'd':
		case'D': if (no1 < no2)
		{
			if (no2 > no3)
			{
				printf("�ő�l��%d�ł�", no2);
			}
			else 
			{
				printf("�ő�l��%d�ł�", no3);
			}
			   else 
		{
			if (no1 > no3)
			{
				printf("�ő�l��&d�ł�", no1);
			}
			else 
			{
				printf("�ő�l��%d�ł�", no3);
			}
		}
		}
		break;
		case 's':
		case'S':if (no1 > no2)
		{
			if (no2 > no3)
			{
				printf("�ŏ��l��%d�ł�", no3);
			}
			else {
				printf("�ŏ��l��%d�ł�", no2);
			}
			   else {
			if (no1>no3) {
				printf("�ŏ��l��&d�ł�", no3);
			}
			else {
				printf("�ŏ��l��%d�ł�", no1);
			}
		}
		}
		break;
		case 'g':
		case'G': printf("���v��%d�ł�", no1 + no2 + no3);
			break;
		case 'h':
			case'H': printf("���ς�%d�ł�", (no1 + no2 + no3) / 3);
				break +
			default: printf("�G���[");
	}
}