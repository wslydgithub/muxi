#include<stdio.h>
void exchange( int v1[], int v2[],int n){
	int i;
	for(i=0;i<n;i++){
		v2[i]=v1[n-1-i];
		}
}
int main(){
	int v1[5],v2[5],i;
	for(i=0;i<5;i++){
		printf("v1[%d]=",i);
		scanf("%d",&v1[i]);
	}
	exchange(v1,v2,5);
	for(i=0;i<5;i++){
		printf("v2[%d]=%d\n",i,v2[i]);
	}
	
	return 0;
	
	
	
}
