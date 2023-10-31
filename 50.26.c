#include<stdio.h>
int main(){
    int a,b;
    printf("请输入a的值");
    scanf("%d",&a);
    printf("请输入b的值");
    scanf("%d",&b);
    int i=0;
    do{
        i++;
    }while(i%a!=0||i%b!=0);
    printf("%d",i);
    return 0;

}
