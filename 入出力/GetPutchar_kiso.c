#include<stdio.h>
int main(void)
{
	int c;/*入力文字を入れる変数は必ずint形で変換する*/
	char ch2;
	
	c=getchar();
	scanf("%c",&ch2);
	
	putchar(c);
}