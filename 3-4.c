#include<stdio.h>
int main()
{
	int A,B;
	puts("请输入两个整数");
	printf("整数A");  scanf("%d",&A);
	printf("整数B");  scanf("%d",&B);
	if (A>B)
		puts("A大于B");
	else if (A=B)
		puts("A等于B");
	else
		puts("A小于B");
	return 0;
}

