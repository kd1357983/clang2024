#include<stdio.h>
main()
{
	float no, no2, no3;
	printf("1�ڂ̎����F");
	scanf("%f", &no);
	printf("2�ڂ̎����F");
	scanf("%f", &no2);
	printf("3�ڂ̎����F");
	scanf("%f", &no3);
	printf("���v��%.2f���ρ�%.2f\n", no + no2 + no3, (no + no2 + no3) / 3);
}