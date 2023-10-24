#include<stdio.h>
int main ()
{
	int A,B,C,max;
	puts("放入三个整数");
	printf("整数A："); scanf("%d",&A);
	printf("整数B："); scanf("%d",&B);
	printf("整数C："); scanf("%d",&C);
	max=A;
	if(B>max) max=B;
	if(C>max) max=C;
	printf("max=%d",max);
	return 0;
}

