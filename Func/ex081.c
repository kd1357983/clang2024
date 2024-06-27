#include<stdio.h>
int dai(int* p);
int syou(int* p);
main()
{
	int deka,tisa;
	int data[8] = { 6,10,8,2,9,5,1,7 };
	deka=dai(data);
	tisa = syou(data);
	printf("Å‘å’l%d\nÅ¬’l=%d", deka, tisa);
}
int dai(int* p)
{
	int i,deka;
	deka = *p;
	for (i = 0; i < 7; i++) 
	{
		if (deka < *(p + i)) 
		{
			deka = *(p + i);
		}
	}
	return deka;
}
int syou(int* p) 
{
	int i, tisa;
	tisa = *p;
	for (i = 0; i < 7; i++) {
		if (tisa > *(p + i)) {
			tisa = *(p + i);
		}
	}
	return tisa;
}
