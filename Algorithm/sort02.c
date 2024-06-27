#include<stdio.h>
main()
{
	int data[5]= { 30,7,25,16,10 };
	int i, j,box;
	i = 4;
	for (; i > 0; i--)
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
	}
	for (i = 0; i <=4; i++) {
		printf("%3d", data[i]);
	}
}