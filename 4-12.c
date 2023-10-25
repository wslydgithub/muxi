#include<stdio.h>
int main()
{
	int a,b;
	puts("请输入一个正整数");
	scanf("%d",&a);
	b=0;
	while(a/10!=0){
		b++;
		a/=10; 
	}
	b=b+1;
	printf("该整数的位数是%d",b);
	return 0;
} 
