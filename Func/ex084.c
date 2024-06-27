#include<stdio.h> 
void mojiretu(char* retu, char* retu2);
main()
{
	char data[256];
	char data2[256];
	printf("•¶š—ñH");
	gets(data);
	mojiretu(data, data2);
	printf("%s", data2);
}
void mojiretu(char* retu, char* retu2)
{
	int i, j;
	j = 0;
	for (i = 0; *retu != '\0'; i++);
	i--;
	for (; i >= 0; i--,j++) {
		*(retu2+j) = *(retu+i);
	}
	*(retu2 + (j+1)) = '\0';
}