#include<stdio.h>
int main ()
{
	int a;
	do{
		int no;
		puts("请输入整数");
		scanf("%d",&no);
		if(no==0)
		puts("整数为0");
		else if(no<0)
		puts("整数为负数");
		else
		puts("整数为正数");
		puts("是否继续输入");
		puts("yes......1/no......9");
		scanf("%d",&a); 
	} while(a==1);
	return 0;
} 
