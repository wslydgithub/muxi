#include<stdio.h>
int min3(int a,int b,int c){
	int min;
	if(a<b){
		min=a;
		
	} else{
		min=b;
	}
	if(min<c){
		min=min;
	}else{
		min=c;
	}
	return min;
	
}
int main(){
	int a,b,c,min;
	puts("请输入3个整数");
	printf("a=");scanf("%d",&a); 
	printf("b=");scanf("%d",&b);
	printf("c=");scanf("%d",&c);
	min=min3(a,b,c);
	printf("%d",min);
} 

