#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	
	/* 数字(その１)を入力 */
	scanf("%d", &a);
	
	/* 数字(その2)を入力 */
	scanf("%d", &b);
	
	/* 数字(その3)を入力 */
	scanf("%d", &c);
	
	/* ()を使った計算式を行う */
	d = (a + b ) * c;
	
	/* 結果を表示 */
	printf("%d", d);
	
	return 0;
}