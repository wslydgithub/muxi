#include<stdio.h>
int sqr(int x){
	x=x*x;
	return x;
}
int main(){
	int a;
	puts("请输入整数");
	printf("a=");scanf("%d",&a);
	printf("%d",sqr(sqr(a))); 
	return 0;
}
