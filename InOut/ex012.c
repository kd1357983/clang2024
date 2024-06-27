#include <stdio.h>
main()
{
	char moji;
	moji = 'b';
	printf("moji=%c\n", moji);
	printf("小文字に変換=%c\n", moji - 0x20);
}
// 『0x20』or『３２』でもいける
// 小文字から大文字にもできる

