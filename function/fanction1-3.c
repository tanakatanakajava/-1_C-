#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
		return a;
	
	else
		return b;
}
int main(void)
{
	int x,y,z;
	
	printf("数字を入力");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	printf("\n%d",max(x,max(y,z)));
	/*変数Xと、変数YとZを比べたものを比較
	   つまり X (Y,Z) って感じ
	   
	   （Y,Z)を（int a,int b)に引き渡す
	     （Y,Z）の大きい方と変数Xを比べる
	      { X,（Y>Z orZ>Y)}を (int a,int b)に引き渡す*/
		
}