#include<stdio.h>
main()
{
	char moji, moji2;
	printf("文字を入力");
	scanf("%c", &moji);
	if (0x41 >= moji || moji >= 0x7B)
	{
		printf("エラー");
	}
		if (0x41 <= moji && 0x5A >= moji)//大文字の場合
		{
			printf("変換すると%c", moji + 0x20);
		}
		if (0x61 <= moji && 0x7A >= moji) //小文字の場合
		{
			printf("変換すると%c", moji - 0x20);
		}
	

}