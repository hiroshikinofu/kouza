#include<stdio.h>

int main(void)
{
	/* •Ï”‚ÌéŒ¾‚Æ”’l‚Ì“ü—Í */
	int a;
	scanf("%d",&a);
	
	
	/* if•¶‚Ìì¬ */
	/* 20Î–¢– */
	if(a < 20){
		printf("Under 20");
	}else {
	/* 20-49 or 50`‚ğ‘ÎÛ‚É‚µ‚½20-49‚É‘Î‚·‚éğŒ•ªŠò */
		if(a <= 49){
		printf("20 - 49");
		}else {
		/* 50`‚ğ‘ÎÛ‚É‚µ‚½•\¦ */
		printf("50 or more");
		}
	}
	return 0;
}
