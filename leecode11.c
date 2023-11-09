#include<stdio.h>
int A(int a,int b){
    int ji=1;
    while(b>=0){
        ji=ji*a;
        a--;
        b--;
    }
    return ji;

}
int main(){
    int m,n,z,i,sum=0;
    printf("请输入楼梯数");
    scanf("%d",&m);
    if(m%2==0){
        z=m/2;
        for(i=z;i>=0;i--){
            sum=sum+A(z,i);
        }
        sum=sum-A(z,z)+1;
    }else{
        z=m/2;
        for(i=z;i>=0;i--){
            sum=sum+A(z,i);
        }
        sum=sum-A(z,z)+1;
        sum=(sum-1)*(z+1)+1;
    }
    printf("%d",sum);
    return 0;

}
