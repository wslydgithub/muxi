#include<stdio.h>
int main()
{
	int a,b,c,sum,d;
	puts("请输入两个整数。");
	printf("整数a:");scanf("%d",&a);
	printf("整数b:");scanf("%d",&b);
	if(a>b) c=b,d=a;
	if(a<b) c=a,d=b;
	sum=0;
	do{
		sum=sum+c;
		c++;
	} while(c<=d);
	printf("和为%d",sum);
	return 0;
}
