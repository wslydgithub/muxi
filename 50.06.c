#include<stdio.h>
int max(int v[],int n){
    int i,c;
    int max=v[0];
    for(i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
            c=i;
        }
    }
    v[c]=0;
    return max;
}
int main()
{
    int n,i,b;
    printf("请输入数字的个数");scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        printf("请输入第%d个数为",i+1);
        scanf("%d",&x[i]);
        if(x[i]>0){
            x[i]=x[i];
        }else{
            x[i]=-x[i];
        }
    }
    int a[n];
    for(b=0;b<n;b++){
        a[b]=max(x,n);

        
    }
    for(b=0;b<n;b++){
        printf("%d ",a[b]);
    }

}
