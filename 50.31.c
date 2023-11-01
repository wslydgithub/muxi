#include<stdio.h>
int main(){
    int a,b;
    printf("请输入被除数");
    scanf("%d",&a);
    printf("请输入除数");
    scanf("%d",&b);
    if(a%b==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
