#include<stdio.h>
int main(){
    int a,i;
    printf("请输入数字的个数");
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++){
        printf("第%d个数字为",i);
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++){
        printf("%c",n[i]);
    }
    return 0;
}
