#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE* fp;
	int score;
	char ch;
	char name[20];
	score = 0;
	printf("���O�����");
	scanf("%s", name);
	while (1)
	{
	printf("���݂̃X�R�A %d('e'�ŏI��)\n", score);
	ch = getch();
	if (ch == 'e') {
			break;
		}
		score++;
		
	} 
	fp = fopen("score.txt", "w");
	fprintf(fp, "���O�@%s\n�X�R�A�@%d", name, score);
	fclose(fp);
	return 0;
}