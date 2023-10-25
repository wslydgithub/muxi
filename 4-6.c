#include<stdio.h>
int main ()
{
	int no,n;
	puts("请输入一个整数");
	scanf("%d",&no);
	n=2;
	if (no>2)
	n=2;
	else{
		n=0;
		printf("%d",n);
	}
	while(n<=no)
	{
		printf("%d ",n);
		n=n+2;
	}
	return 0;
	
}
