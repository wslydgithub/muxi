#include<stdio.h>
int main ()
{
        int A,B,C,D,max;
        puts("放入四个整数");
        printf("整数A："); scanf("%d",&A);
        printf("整数B："); scanf("%d",&B);
        printf("整数C："); scanf("%d",&C);
	printf("整数D："); scanf("%d",&D);
        max=A;
        if(B>max) max=B;
        if(C>max) max=C;
	if(D>max) max=D;
        printf("max=%d",max);
        return 0;
}
