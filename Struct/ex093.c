#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"エンピツ",30,5},
									{"ケシゴム",50,2},
									{"フデバコ",500,3} };
	int i;
	struct syohin_data* p=&syohin[0];
	
	for (i = 0; i < 3; i++,p++) {
		printf("商品名:%s\t", syohin[i].name);
		printf("単価:%4d\t", syohin[i].tanka);
		printf("個数:%4d\t", syohin[i].kosuu);
		printf("金額:%5d\n", p->tanka * p->kosuu);
	}
}