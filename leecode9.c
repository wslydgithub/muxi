#include<stdio.h>
int bit(int z){
    int bit=0;
    while(z>=1){
        bit++;
        z=z/10;
    }
    return bit;
}
int len(const char x[]){
    int len=0;
    int i=0;
    while(x[i]!='\0'){
        len++;
        i++;
    }
    return len;
}
int ji(int num1){
    int ji=1;
    int i=0;
    while(i<=num1){
        if(i==0){
            ji=ji*1;
        }else{ji=ji*2;}
        i++;
    }
    return ji;
}
int exchange(const char x[],int num){
    int i,sum=0;
    for(i=0;i<num;i++){
        if(x[i]=='1'){
            sum=sum+ji(i);
        }
    }
    return sum;
}
int main(){
    int i,sum1,sum2,sum3,z,n,d;
    char x[100];
    char y[100];
    int m[n];
    printf("请输入第一个二进制数");
    scanf("%s",x);
    printf("请输入第二个二进制数");
    scanf("%s",y);
    sum1=exchange(x,len(x));
    sum2=exchange(y,len(y));
    sum3=sum1+sum2;
    if(sum3>15){
        n=5;
        for(i=4;i>=0;i--){
            m[i]=sum3%2;
            sum3=sum3/2;
        }
    }
    if(sum3<=15){
        n=4;
        for(i=3;i>=0;i--){
            m[i]=sum3%2;
            sum3=sum3/2;
        }
    }
    for(i=0;i<n;i++){
        printf("%d",m[i]);
    }
    return 0;


}
