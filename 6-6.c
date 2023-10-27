#include<stdio.h>
int min_of(int v[],int n){
	int min=v[0];
	int i;
	for(i=1;i<n;i++){
		if(v[i]<min){
			min=v[i];
		}
	}
	return min;	
} 
int main(){
	int v[5],min,i;
	for(i=0;i<5;i++){
		printf("v[%d]=",i);
		scanf("%d",&v[i]);
	}
	min=min_of(v,5);
	printf("%d",min);
}

