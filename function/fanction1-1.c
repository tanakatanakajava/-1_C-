#include<stdio.h>
int ans(int a){
	int x;
	x=a*a;
	return(x);

}
	
int main(void)
{
	
	int b;
	
      printf("数字を入力\n");
	scanf("%d",&b);
	
	printf("%d,%d",ans(b),b);
	
	return 0;
}

/*関数名(変数）で、変数を関数に引き渡す*/