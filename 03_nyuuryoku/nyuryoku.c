#include <stdio.h>

int main(void)
{
	char a;
	char b;
	
	printf("���Ȃ��̖��O�̃C�j�V�����������Ă�������");
	scanf("%c", &a);
	
	scanf("%c", &b);

	
	printf("���Ȃ��̕c���̃C�j�V�����������Ă�������");
	scanf("%c", &b);

	printf("���Ȃ��̃C�j�V�����́A%c.%c�ł��ˁH", a, b);
	return 0;
}