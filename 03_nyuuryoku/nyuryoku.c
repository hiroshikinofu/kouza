#include <stdio.h>

int main(void)
{
	char a;
	char b;
	
	printf("あなたの名前のイニシャルを教えてください");
	scanf("%c", &a);
	
	scanf("%c", &b);

	
	printf("あなたの苗字のイニシャルを教えてください");
	scanf("%c", &b);

	printf("あなたのイニシャルは、%c.%cですね？", a, b);
	return 0;
}