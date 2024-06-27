#include<stdio.h>
main()
{
	int data[5]= { 30,7,25,16,10 };
	int i, j,box,flg;
	i = 4;
	flg = 0;
	for (; i > 0; i--)
	{
		if (flg = 0) 
		{
			for (j = 0; j < i; j++)
			{

				if (data[j] > data[j + 1])
				{
					box = data[j + 1];
					data[j + 1] = data[j];
					data[j] = box;
				}
			}
			flg = 1;
		}
		if (flg = 1)
		{
			for (j = i-1; j > 0; j++)
			{

				if (data[j] < data[j - 1])
				{
					box = data[j - 1];
					data[j - 1] = data[j];
					data[j] = box;
				}
			}
			flg = 0;
		}

	}
	for (i = 0; i <=4; i++) {
		printf("%3d", data[i]);
	}
}