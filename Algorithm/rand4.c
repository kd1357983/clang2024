#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;
	
	
	srand(time(0));
	rand();
	kazu = rand() % 5 + 1;
	printf("ç°ì˙ÇÃÇ†Ç»ÇΩÇÃâ^ê®ÇÕÅA");
	for (;kazu >= 0; kazu--)  
	{
		printf(" Åô");
	}
	printf("Ç≈Ç∑ÅB");
}