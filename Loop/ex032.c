#include<stdio.h>
main() {


	int no, kakeru;
	printf("数を入れて：");
	scanf("%d", &no);
	for (kakeru = 1; kakeru <= 5; kakeru++) {


		printf("%d ", no * kakeru);
	}
}