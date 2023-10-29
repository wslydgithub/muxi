#include<stdio.h>
#define diff(x,y) (((x)>(y)) ? (x-y):(y-x))
int main(){
    int a,b;
    printf("请输入a,b两个数\n");
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    printf("两者之差为%d",diff(a,b));
    return 0;

}
