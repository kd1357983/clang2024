#include<stdio.h>
main()
{

char moji;

printf("���Z�q�����āF");

scanf("%c",&moji);
switch (moji) {
case '+': printf("���Z�ł�");
	break;

case 0x2D: printf("���Z�ł�");
	break;

case 0x2A: printf("��Z�ł�");
	break;

case 0x2F: printf("���Z�ł�");
	break;

case 0x25: printf("���܂�ł�");
	break;

default:printf("���̑��ł�");
}
}
