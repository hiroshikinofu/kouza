#include<stdio.h>

int main(void)
{
	/* 変数の宣言と数値の入力 */
	int a;
	scanf("%d",&a);
	
	
	/* if文の作成 */
	/* 20歳未満 */
	if(a < 20){
		printf("Under 20");
	}else {
	/* 20-49 or 50〜を対象にした20-49に対する条件分岐 */
		if(a <= 49){
		printf("20 - 49");
		}else {
		/* 50〜を対象にした表示 */
		printf("50 or more");
		}
	}
	return 0;
}
