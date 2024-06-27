#include<stdio.h>
main()
{
	char moji, moji2;
	printf("•¶š‚ğ“ü—Í");
	scanf("%c", &moji);
	if (0x41 >= moji || moji >= 0x7B)
	{
		printf("ƒGƒ‰[");
	}
		if (0x41 <= moji && 0x5A >= moji)//‘å•¶š‚Ìê‡
		{
			printf("•ÏŠ·‚·‚é‚Æ%c", moji + 0x20);
		}
		if (0x61 <= moji && 0x7A >= moji) //¬•¶š‚Ìê‡
		{
			printf("•ÏŠ·‚·‚é‚Æ%c", moji - 0x20);
		}
	

}