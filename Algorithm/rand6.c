#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int play, con;
	printf("�����o���܂����H\n(1:�O�[�@2�F�`���L�@3:�p�[�@��");
	scanf("%d", &play);
	srand(time(0));
	rand();
	con = rand() % 3;
	if (play == 1)  
	{
		if (con == 0) {
			printf("�������ł�");
		}
		if (con == 1) {
			printf("�v���C���[�̏����ł�");
		}
		if (con == 2) {
			printf("�R���s���[�^�̏����ł�");
		}
	}
	if (play == 2) {
		if (con == 0) {
			printf("�R���s���[�^�̏����ł�");
		}
		if (con == 1) {
			printf("�������ł�");
		}
		if (con == 2) {
			printf("�v���C���[�̏����ł�");
		}
	}
	if (play == 3) {
		if (con == 0) {
			printf("�v���C���[�̏����ł�");
		}
		if (con == 1) {
			printf("�R���s���[�^�̏����ł�");
		}
		if (con == 2) {
			printf("�������ł�");
		}
	}
}