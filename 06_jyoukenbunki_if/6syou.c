#include <stdio.h>

int main (void)
{
	int a;
	
	/* 数字を入力 */
	
	scanf("%d", &a);
	
	/* 表示 */
	if(a == 1){
		printf("OK");
	}else {
		printf("Try again");
	}
	
	return 0;
}