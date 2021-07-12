#include<stdio.h>

int main(void)
{
	int a;
	
	/* 数字を入力 */
	scanf("%d", &a);
	
	/* 表示 */
	switch(a) {
	case 1:
		printf("sukunai");
		break;
		
	case 2:
		printf("tyoudo yoi");
		break;
		
	case 3:
		printf("ooi");
		break;
	
		
	/* 入力した値が1～3以外の時  */
	default:
		printf("chigau");
		break;

	}	
	return 0;
}
