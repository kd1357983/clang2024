#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;
	
	
	srand(time(0));
	rand();
	kazu = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^���́A");
	for (;kazu >= 0; kazu--)  
	{
		printf(" ��");
	}
	printf("�ł��B");
}