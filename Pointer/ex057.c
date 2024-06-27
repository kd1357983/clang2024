#include<stdio.h>
main()
/* {
	int tbl[][3] = {{10,20,30},{40,50,60},{70,80,90}};
	int* p_tbl, i,k;
	p_tbl = tbl[0];
	for (i = 0,k=0; i < 3 * 3; i++) {
		printf(" %d ", *p_tbl);
		p_tbl++;
		k++;
		if (k >=3) {
			printf("\n");
			k = 0;
		}
	}
}*/
 {
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int *p_tbl, i, k;
	p_tbl = tbl[0];
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 3; k++) {
			printf(" %d ", *p_tbl);
			p_tbl++;
		}
		printf("\n");
	}
}