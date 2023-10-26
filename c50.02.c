#include<stdio.h>
int main()
{
	int a,b;
	puts("请输入两门课的成绩");
	printf("第一门");scanf("%d",&a);
	printf("第二门");scanf("%d",&b);
	if(a<0||a>100){
		printf("it is error");
	}
	if(b<0||b>100){
		printf("it is error");
	}
	if(a>=60&&a<=100){
		if(b>=60&&b<=100){
			printf("it is pass");
		}
	}
	if(a>=0&&a<=60){
		if(b>=0&&b<=60){
			printf("it is not pass");
		}
		
	}
	if(a>=0&&a<=60){
		if(b>=60&&b<=100){
			printf("it is not pass");
		}
		
	}
	if(b>=0&&b<=60){
		if(a>=60&&a<=100){
			printf("it is not pass");
		}
		
	}
	return 0;
}
	
	

