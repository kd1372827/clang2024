#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* p_a;	//a�p�|�C���^
	float* p_b;	//b�p�|�C���^
	int i, ga;	//�J�E���g�Aa���v�p
	float gb;	//b���v�p
	p_a = a;	//a�̃A�h���X���
	for (ga = 0, i = 0; i < 6; i++) {	//a�̍��v�N���A�A6�񃋁[�v
		ga += *p_a;						//���v�ɑ�������
		p_a++;							//�|�C���^��i�߂�
	}
	printf("�z��a\t���v=   %d\t����=%.3f\n", ga, ga / 6.0);

	p_b = b;	//b�̃A�h���X���
	for (gb = 0, i = 0; i < 4; i++) {	//b�̍��v�N���A�A6�񃋁[�v
		gb += *p_b;						//���v�ɑ�������
		p_b++;							//�|�C���^��i�߂�
	}
	printf("�z��b\t���v=%.3f\t����=%.3f\n", gb, gb / 4.0);
}