#include<stdio.h>
int main()
{
	int len,height,a,b;
	puts("请输入长");
	scanf("%d",&a);
	puts("请输入宽");
	scanf("%d",&b); 
	for(len=1;len<=b;len++){
		for(height=1;height<=a;height++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
} 
