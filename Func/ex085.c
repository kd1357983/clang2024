#include<stdio.h>
void renketu(char* a, char* b);
main()
{
	char a[256], b[256];
	printf("”z—ña:");
	gets(a);
	printf("”z—ñb:");
	gets(b);
	renketu(a, b);
	printf("”z—ña=%s\n", a);
}
void renketu(char* a, char* b)
{
	int i, j;
	for (i = 0; *(a + i) != '\0'; i++);
	for (j = 0; *(a + i) = *(b + j); i++, j++);

}
