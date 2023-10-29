#include<stdio.h>
#define swap(type,x,y) do{\
    type temp=(x);\
    (x)=(y);\
    (y)=temp;\
}while(0)
int main(){
    int x=11,y=12;
    swap(int,x,y);
    printf("x的值是%d\n",x);
    printf("y的值是%d\n",y);
    return 0;
}
