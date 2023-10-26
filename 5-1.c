#include<stdio.h>
int main()
{
	int i,n;
	puts("请输入数组的元素个数");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		a[i]=n-i;
	};
	for (i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	};
	int b[n];
	for (i=0;i<n;i++){
		b[i]=a[i];
		
	};
	for (i=0;i<n;i++){
		printf("b[%d]=%d\n",i,b[i]);
	}
	return 0;
}
