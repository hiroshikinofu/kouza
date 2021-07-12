#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	
	/* ”š(‚»‚Ì‚P)‚ğ“ü—Í */
	scanf("%d", &a);
	
	/* ”š(‚»‚Ì2)‚ğ“ü—Í */
	scanf("%d", &b);
	
	/* Š|‚¯Z‚·‚é */
	c = a * b;
	
	/* Œ‹‰Ê‚ğ•\¦ */
	printf("%d", c);
	
	return 0;
}