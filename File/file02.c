#include<stdio.h>
main()
{
	FILE* fp;
	char str[256], equip[100];
	int i, lv, hp;
	fp = fopen("file02.txt", "r");	//�����R�[�h�@���O��t���ĕۑ��ŃG���R�[�h��ANSI�ɂ���
	for (i = 0; i < 3; i++) {
		fscanf(fp, "%s", str);
		printf("%d:%s\n", i, str);
	}
	fscanf(fp, "%d%d%s", &lv, &hp, equip);
	printf("lv=%d hp=%d ����=%s\n", lv, hp, equip);
	fclose(fp);
}