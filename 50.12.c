#include<stdio.h>
int main(){
    int a,n;
    n=0;
    printf("请输入数字");
    scanf("%d",&a);
    do{
        if(a%2==0){
            a=a/2;
            n=n+1;
        }else{
            a=(3*a-1)/2;
            n=n+1;
        }
    }while(a!=1);
    printf("次数为%d",n);
    return 0;
}
