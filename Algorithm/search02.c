#include<stdio.h>
main()
{
	int i, no, box[11] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("�T���l�������");
	scanf("%d",&no);
	box[10] = no;
	for (i = 0; no!=box[i]; i++);
	
	if (i == 10)
	{
		printf("������Ȃ�����");
	}
	else {
		printf("%d�ԖڂɌ�������",i+1);
	}
}