#include<stdio.h>
main()
{
	char moji, moji2;
	printf("���������");
	scanf("%c", &moji);
	if (0x41 >= moji || moji >= 0x7B)
	{
		printf("�G���[");
	}
		if (0x41 <= moji && 0x5A >= moji)//�啶���̏ꍇ
		{
			printf("�ϊ������%c", moji + 0x20);
		}
		if (0x61 <= moji && 0x7A >= moji) //�������̏ꍇ
		{
			printf("�ϊ������%c", moji - 0x20);
		}
	

}