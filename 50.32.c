#include<stdio.h>
int main(){
    int a,b,c,d,e,i;
    printf("请输入数字");
    scanf("%d",&a);
    b=a%10;
    c=(a%100-b)/10;
    d=(a-b-c*10)/100;
    for(i=1;i<=d;i++){
        printf("B");
    }
    for(i=1;i<=c;i++){
        printf("S");
    }
    for(i=1;i<=b;i++){
        printf("%d",i);
    }
    return 0;

}
