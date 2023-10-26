#include<stdio.h>
int main()
{
	puts("请输入三角形的三个边长");
	int a,b,c,mid,max,min;
	printf("a=");scanf("%d",&a);
	printf("b=");scanf("%d",&b);
	printf("c=");scanf("%d",&c);
	max=a;
	min=a;
	if(max<b) max=b;
	if(max<c) max=c;
	if(min>b) min=b;
	if(min>c) min=c;
	if(a<max&&a>min){
		if(min+a<max){
			printf("0");
		}
	}
	if(b<max&&b>min){
		if(min+b<max){
			printf("0");
		}
	}
	if(c<max&&c>min){
		if(min+c<max){
			printf("0");
		}
	}
	do{
		if(a<=0||b<=0)
	{
		printf("请输入正整数"); 
	}} while(a<=0||b<=0);
	do{
			if(c<=0){
		printf("请输入正整数"); 
	};
	}while(c<0);
	if (a==b){
		if(b==c){
			printf("1"); 
		}
	}
	if(a==b){
		if(b!=c){
			if(a+b>c){
				printf("2"); 
			}else{
				printf("0");
			}
		}
		
	}
		if(a==c){
		if(b!=c){
			if(a+c>b){
				printf("2"); 
			}
			else{
				printf("0");
			}
		}
		
	}	if(c==b){
		if(a!=c){
			if(c+b>a){
				printf("2"); 
			}else{
				printf("0");
			}
		}
		
	}
	if(a!=b){
		if(b!=c){
			if(c!=a){
				if(a+b>c&&a-b<c){
					if(a+c>b&&a-c<b){
						if(b+c>a&&b-c<a){
							printf("3");
						}
					}
				}
			}
		}
	}
	return 0;

	
	
}
