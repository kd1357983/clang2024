#include<stdio.h>
main()
{
	int a, b,c;
	a = 50;
	b = 10;
	int *p_a, *p_b;
	p_a = &a;
	p_b = &b;
	c = *p_a + *p_b;
	printf("%d + %d = %d", *p_a, *p_b,c);
}