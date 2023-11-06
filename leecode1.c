#include<stdio.h>
int main(){
    int a;
    printf("请输入数的个数");
    scanf("%d",&a);
    int x[a];
    int i,target,d;
    for(i=0;i<a;i++){
        scanf("%d",&x[i]);
    }
    printf("请输入target");
    scanf("%d",&target);
    for(i=0;i<a;i++){
        for(d=i+1;d<a;d++){
            if(x[i]+x[d]==target){
                printf("[%d,%d]",i,d);
            }
        }
    }
    return 0;
}
