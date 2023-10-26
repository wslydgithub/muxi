#include<stdio.h>
int main()
{
	int i,n;
	puts("请输入元素的个数");
	scanf("%d",&n); 
	
	int a[n],max,min;
	
	for (i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	} ;
	max=min=a[0];
	for (i=0;i<n;i++){
		if (a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
	};
	printf("max is %d",max);
	printf("min is %d",min);
	return 0;
}
