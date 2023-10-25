#include<stdio.h>
int main ()
{
	int a,b;
	puts("请输入一个整数");scanf("%d",&a);
	b=2;
	if(a<b)
	printf("0");
	while(a>b)
	{
		printf("%d ",b);
		b=b*2;
	}
	return 0;
		
	
	
 
} 
