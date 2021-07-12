#include <stdio.h>

int main(void)
{
	/* キー入力の受け皿（変数a）の作成 */
	int a;
	
	/* キーボード入力の値を変数aに代入 */
	scanf("%d", &a);
	
	
	/* 入力した値を基に条件分岐が行われる */
	/* a == 1のとき */
	if(a == 1) {
		printf("sukunai");
	}else{
		if(a == 2){
				/* a == 2のとき */
				printf("tyoudo yoi");
		}else{
			
			if(a == 3){
				/* a == 3のとき */
				printf("ooi");
			}else{
			/* aの値が1～3以外のとき */		
			printf("chigau");		
			}
		}
		}
	return 0;
}