#include<stdio.h>
main()
{
	int a, b, box;
	int* p_a, * p_b;
	a = 100;
	b = 200;
	p_a = &a;
	p_b = &b;
	printf("実行前：a=%d   b=%d\n", *p_a, *p_b);
	box = p_b;
	p_b = p_a;
	p_a = box;
	printf("実行前：a=%d   b=%d\n", *p_a, *p_b);
}