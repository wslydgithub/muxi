#include<stdio.h>
int cube(int x){
	x=x*x*x;
	return x;
}
int main()
{
	int a,b;
	puts("请输入一个整数");
	printf("a=");scanf("%d",&a);
	b=cube(a);
	printf("%d",b) ;
	return 0;
	
}
