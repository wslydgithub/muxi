#include<stdio.h>
int main()
{
	int a,b,c,d,min;
	puts("请输入两个正整数");
	printf("a=");scanf("%d",&a); 
	printf("b=");scanf("%d",&b);
	min=0;
	if(a<b){
		min=a;
	}else{
		min=b;
	}
	if(a<0||b<0){
			printf("请输入正整数"); 
			return 1;
	}
	d=0;	
	for (c=1;c<=min;c++){
		if(a%c==0){
			if(b%c==0){
				d=c;
			}
		}
	}
	printf("%d",d);
	return 0;
} 
