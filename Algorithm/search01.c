#include<stdio.h>
main()
{
	int i, no, box[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("探索値ｓを入力");
	scanf("%d",&no);
	for (i = 0; i < 10; i++) {
		if (box[i] ==no)
			break;
	}
	if (i == 10)
	{
		printf("見つからなかった");
	}
	else {
		printf("%d番目に見つかった",i+1);
	}
}