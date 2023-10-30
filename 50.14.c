#include<stdio.h>
int min (int v[],int n){
    int min,i,x,b;
    min=v[0];
    for(i=0;i<n;i++){
        if(v[i]<min){
            min=v[i];
            b=i;
        }
    }
    x=v[0];
    v[0]=min;
    v[b]=x;
    for (i=0;i<n;i++){
        printf("%3d",v[i]);
    }
}
int main (){
    int a,i;
    printf("请输入数字个数");
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++){
        scanf("%d",&x[i]);
    }
    printf("%d",a);
    min(x,a);
    return 0;
}
