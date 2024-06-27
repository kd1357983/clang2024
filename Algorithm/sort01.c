#include<stdio.h>
main()
{
	int data[5] = { 30,7,25,16,10 };
	int i, j, box;
	for (i = 0; i < 4; i++) {
		j = i + 1;
		for (; j < 5; j++) {
			if (data[i] > data[j]) {
				box = data[i];
				data[i] = data[j];
				data[j] = box;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%3d", data[i]);
	}
}
