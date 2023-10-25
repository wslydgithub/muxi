#include<stdio.h>
int main()
{
	int a,b,i;
	printf("a的值为\n");
	scanf("%d",&a);
	b=0;
	for(i=0;i<=a;i++){
		b=b+i;		
	}
	printf("和为%d",b);
	return 0;
}
