#include<stdio.h>
main()
{
	int no, hunn, byou, zikan, zikanamari;
	printf("�b������́F");
	scanf("%d", &no);
	if (0 <= no) 
	

		if (no <= 5000)
		{
			zikan = no / 3600;
			zikanamari = no % 3600;
			hunn = zikanamari / 60;
			byou = zikanamari % 60;
			printf("%d����%d��%d�b�ł�", zikan, hunn, byou);
		}

		else {
			printf("error");

		}
	

	else {
		printf("�}�C�i�X�̓G���[�ł�");
	}

}

