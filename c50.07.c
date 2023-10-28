#include<stdio.h>
int main()
{
	int a=0,i;
	printf("数字的个数为\n");
	scanf("%d",&a);
	

	int s[a];
	for(i=1;i<a+1;i++){
		printf("第%d个=",i);
		scanf("%d",&s[i-1]);
	}
	int x=0;
	int b[x],ji=1;
	for(i=0;i<a;i++){
		if(s[i]%2!=0){
			x++;
			b[x-1]=s[i];
		}
	}
	for(i=0;i<x;i++){
		ji=ji*b[i];
	}
	printf("积为%d",ji);
	return 0;
	
	
}
