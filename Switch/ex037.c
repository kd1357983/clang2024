#include<stdio.h>
main()
{

char moji;

printf("演算子を入れて：");

scanf("%c",&moji);
switch (moji) {
case '+': printf("加算です");
	break;

case 0x2D: printf("減算です");
	break;

case 0x2A: printf("乗算です");
	break;

case 0x2F: printf("除算です");
	break;

case 0x25: printf("あまりです");
	break;

default:printf("その他です");
}
}
