#include<stdio.h>

int main(void)
{
	/* �ϐ��̐錾�Ɛ��l�̓��� */
	int a;
	scanf("%d",&a);
	
	
	/* if���̍쐬 */
	/* 20�Ζ��� */
	if(a < 20){
		printf("Under 20");
	}else {
	/* 20-49 or 50�`��Ώۂɂ���20-49�ɑ΂���������� */
		if(a <= 49){
		printf("20 - 49");
		}else {
		/* 50�`��Ώۂɂ����\�� */
		printf("50 or more");
		}
	}
	return 0;
}
