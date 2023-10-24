#include<stdio.h>
int main ()
{
	int A,B,C;
	puts("请输入两个整数");
	printf("整数A:"); scanf("%d",&A);
	printf("整数B:"); scanf("%d",&B);
	if (A>B)
		C=A-B;
	else
		C=B-A;
	if (C<10||C==10)
		printf("它们的差小于等于10");
	else
		printf("它们的差大于10");
	return 0;
}
