#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	
	/* ����(���̂P)����� */
	scanf("%d", &a);
	
	/* ����(����2)����� */
	scanf("%d", &b);
	
	/* �����i���̂P�j�𐔎��i����2�j�Ŋ��� */
	c = a / b;
	
	/* ���ʂ�\�� */
	printf("%d", c);
	
	return 0;
}