#include<stdio.h>
typedef struct{
	char Wname[20];
	int bullet;
	float atk;
}Weapon;
typedef struct
{
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;
void Setinfo(Soldier* s, char* filename);
void display(Soldier s);
main()
{
	Soldier sol;
	Setinfo(&sol, "file03.txt");
	display(sol);
}
void Setinfo(Soldier* s, char* filename)
{
	FILE* fp;
	if (fp = fopen(filename, "r")) {
		fscanf(fp, " %s %d %s %d %f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
		fclose(fp);
	}
	else {
		printf("ファイルが読み込めません");
	}
}
	void display(Soldier s) 
	{
		printf("名前;%s 体力:%d\n", s.name, s.hp);
		printf("武器:%s 残段数;%d 攻撃力%.2f\n", s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
	}