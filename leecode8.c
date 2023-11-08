#include<stdio.h>
int jiecheng(int x){
    int jiecheng=1,i;
    for(i=1;i<=x;i++){
        jiecheng=jiecheng*10;
    }
    return jiecheng;
}
int main(){
    int n,i,sum=0;
    printf("请输入数的位数");
    scanf("%d",&n);
    int x[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=n-1;i>=0;i--){
        sum=sum+x[i]*jiecheng(i);
    }
    for(i=0;i<n;i++){
        if(x[i]==9){
            if(i==n-1)n=n+1;
            else n=n;
        }else n=n;
    }
    sum=sum+1;
    int y[n];
    for(i=n-1;i>=0;i--){
        y[i]=sum%10;
        sum=sum/10;
    }
    for(i=0;i<n;i++){
        printf("x[%d]=%d\n",i,y[i]);
    }
    return 0;
    
    
}
