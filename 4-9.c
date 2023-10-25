#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a%2==0)
	{
		int b=1;
		while(b<a/2){
		printf("+-");
		b++;}
		
	}
	else{
		a=a-1;
		int b=1;
		while(b<a/2){
		printf("+-");
		b++;}
		printf("+"); 
	}
	return 0;
}
