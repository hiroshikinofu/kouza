#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	
	/* ����(���̂P)����� */
	scanf("%d", &a);
	
	/* ����(����2)����� */
	scanf("%d", &b);
	
	/* ����(����3)����� */
	scanf("%d", &c);
	
	/* ()���g�����v�Z�����s�� */
	d = (a + b ) * c;
	
	/* ���ʂ�\�� */
	printf("%d", d);
	
	return 0;
}