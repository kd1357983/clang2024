#include<stdio.h>
main()
{

char moji;

printf("‰‰Zq‚ğ“ü‚ê‚ÄF");

scanf("%c",&moji);
switch (moji) {
case '+': printf("‰ÁZ‚Å‚·");
	break;

case 0x2D: printf("Œ¸Z‚Å‚·");
	break;

case 0x2A: printf("æZ‚Å‚·");
	break;

case 0x2F: printf("œZ‚Å‚·");
	break;

case 0x25: printf("‚ ‚Ü‚è‚Å‚·");
	break;

default:printf("‚»‚Ì‘¼‚Å‚·");
}
}
