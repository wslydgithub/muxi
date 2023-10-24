#include<stdio.h>
int main ()
{
	int a;
	puts("请输入月份");
	scanf("%d",&a);
	switch (a){
		case 3:printf("为春季"); break;
		case 4:printf("为春季"); break;
		case 5:printf("为春季"); break;
		case 6:printf("为夏季"); break;
		case 7:printf("为夏季"); break;
		case 8:printf("为夏季"); break;
		case 9:printf("为秋季"); break;
		case 10:printf("为秋季"); break;
		case 11:printf("为秋季"); break;
		case 12:printf("为冬季"); break;
		case 1:printf("为冬季"); break;
		case 2:printf("为冬季"); break;
	}
	return 0;
}	
