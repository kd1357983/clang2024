#include<stdio.h>
main()
{
	int a[6] = { 11,22,33,44,55,66 };
	float b[4] = { 11.1,22.2,33.3,44.4 };
	int i;
	float gokei;
	int *p_a;
	float* p_b;
	p_a = a;
	p_b = b;
	for (gokei = 0, i = 0; i <= 5; i++, p_a++) {
		gokei += *p_a;
	}
	printf("zña v%7d\t½Ï%.3f\n",(int) gokei, gokei / 6);
	for (gokei = 0, i = 0; i <= 3; i++, p_b++) {
		gokei += *p_b;
	}
	printf("zña v%.3f\t½Ï%.3f", gokei, gokei / 4);
}