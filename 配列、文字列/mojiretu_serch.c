#include<stdio.h>
int main(void)
{
	char str[200];
	int i;
	
	scanf("%s",str);
	
	for (i=0;str[i];i++){
		
		if(str[i]=='A'||str[i]=='a')
			break;
	}
	if (str[i])
		printf("A,aは%d文字目です\n",i+1);
	else 
		printf("A,aは含まれていません\n");
}

