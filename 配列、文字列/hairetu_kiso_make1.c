#include<stdio.h>
int main(void)
{
	char hello[6];
	
	hello[0]='H';
	hello[1]='e';
	hello[2]='l';
	hello[3]='l';
	hello[4]='o';
	hello[5]=0;
	/*文字の終端に0を代入する*/
	
	printf(hello);
}