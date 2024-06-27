#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu, con,kaigyo;
	srand(time(0));
	rand();
	for (kaigyo = 0, con = 0; kaigyo <= 9; kaigyo++) {
		for (con = 0; con <= 9; con++) {
			kazu = rand() % 300 + 1;
			printf("%4d", kazu);
		}
		printf("\n");
	}

}