#include<stdio.h>
main()
{
	int i, no, box[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("�T���l�������");
	scanf("%d",&no);
	for (i = 0; i < 10; i++) {
		if (box[i] ==no)
			break;
	}
	if (i == 10)
	{
		printf("������Ȃ�����");
	}
	else {
		printf("%d�ԖڂɌ�������",i+1);
	}
}