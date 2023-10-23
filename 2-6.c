#include<stdio.h>
int main ()
{
	int high;
	double weigh;
	puts("请输入您的身高；");
        scanf("%d",&high);
        weigh=(high-100)*0.9;
        printf("您的标准体重是%.1f公斤\n",weigh);
	return 0;
}
