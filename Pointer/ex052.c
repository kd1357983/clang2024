#include<stdio.h>
main()
{
	int a, b,box;
	a = 100;
	b = 200;
	int *p_a, *p_b;
	p_a = &a;
	p_b = &b;
	printf("���s�O�Fa=%d   b=%d\n", *p_a, *p_b);
	box = *p_b;
	*p_b = *p_a;
	*p_a = box;
	printf("���s�O�Fa=%d   b=%d\n", *p_a, *p_b);
}