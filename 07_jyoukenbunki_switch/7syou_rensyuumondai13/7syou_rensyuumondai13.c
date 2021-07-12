#include <stdio.h>

int main(void)
{
	/* 【ファイル名】7章‗練習問題13 */
	
	
	/* 【宣言】変数a */	
	int a;
	
	
	/* 【表示】 キーボードの入力値 */
	printf(" Teki ga arawareta. Dore wo tsukaimasuka ? (1:katana 2:yumi 3:panchi) ");
	
	/* 【入力】キーボードで入力した数値を変数aに代入 */
	scanf("%d", &a);
	
	/* 【条件分岐】switch文 */
	switch(a){
	
	/* 【条件】変数aの値が1のとき */
	case 1:
		printf("Anataha ha makemashita.");
		break;
	
	/* 【条件】変数aの値が2のとき */
	case 2:
	printf("Hikiwake desu.");
		break;
		
	/* 【条件】変数aの値が3のとき */
	case 3:
	printf("Anata no kachi desu.");
		break;	
	
	
	/* 【条件】変数aの値が1～3以外のときは「なにもしない」 */
	}
		return 0;

}