#include <stdio.h>

int main(void)
{
	/* 【宣言】変数a */
	int a;
	
	/* 【表示】キーボード入力用のテキスト */
	printf("Teki ga arawareta. Dore wo tsukaimasuka ? (1:katana, 2:yumi, 3:panchi) ");
	
	/* 【入力】キーボードで入力した値を変数aに代入 */
	scanf("%d", &a);
	
	/* 【条件分岐】switch‗1 */
	switch(a) {
		
	/* 【分岐】case a == 1のとき */
	case 1:
		printf("Anata ha makemasita. (T_T)");
		break;
		
	/* 【分岐】case a == 3のとき */
	case 3:
		printf("Anata ha kachi desu. (^_^)/");
		break;
		
		/* 【分岐】case a == 2のとき */
	case 2:
		
		/* 【表示】キーボード入力用のテキスト */
		printf("tsugi no teki ga arawareta. Doushimasuka? (1:tatakau, 2:nigeru)");
		
	/* 【入力】キーボードで入力した値を変数aに代入 */
		scanf("%d", &a);
		
	/* 【条件分岐】switch‗2 */
		switch(a) {

	/* 【分岐】case a == 1のとき */
	case 1:
		printf("Yatta. Teki wo taoshita. (^_^)/");
		break;
			
	/* 【分岐】case a == 1以外のとき */
	default:
		printf("Nigerarenakatta. Anata ha taosareta. (T_T)");
		break;

			
		}
	}
	return 0;
}