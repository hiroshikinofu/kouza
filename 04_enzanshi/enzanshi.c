#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	
	/* 数字(その１)を入力 */
	scanf("%d", &a);
	
	/* 数字(その2)を入力 */
	scanf("%d", &b);
	
	/* 足し算する */
	c = a + b;
	
	/* 結果を表示 */
	printf("%d", c);
	
	return 0;
}