#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE* fp;
	int max_score=0;
	int score;
	char ch;
	char max_name[20],name[20];
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("�ō����_�@%s\n�X�R�A:%d\n", max_name, max_score);
	printf("���O�����");
	scanf("%s", name);
	score = 0;
	while (1)
	{
	printf("���݂̃X�R�A %d('e'�ŏI��)\n", score);
	ch = getch();
	if (ch == 'e') {
			break;
		}
		score++;
		
	} 
	if (score > max_score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "���O�@%s\n�X�R�A�@%d", name, score);
		fclose(fp);
	}
	return 0;
}