#include<stdio.h>
#define SIZE 5
main()
{
	int data[SIZE] = { 30,7,25,16,10 };
	int i, j, box;
	i = 1;
	for (; i < 5; i++)
	{
		for (j = 0; j + 1 < i; j++)
		for (j = i - 1; j >= 0; j--) 
		{
			if (data[j + 1] > data[j])
			{
				break;
			}
			box = data[j + 1];
			data[j + 1] = data[j];
			data[j] = box;
		}
	}
	for (i = 0; i <= 4; i++) {
		printf("%3d", data[i]);
	}
}