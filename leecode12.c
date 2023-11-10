#include<stdio.h>
int main(){
    int  x,y;
    printf("请输入第一个树的总数");
    scanf("%d",&x);
    printf("请输入第二个树的总数");
    scanf("%d",&y);
    if(x==y){
        int m[x],n[y];
        int i;
        for(i=0;i<x;i++){
            printf("x[%d]=",i);
            scanf("%d",&m[i]);
            printf("y[%d]=",i);
            scanf("%d",&n[i]);
        }
        for(i=0;i<x;i++){
            if(m[i]==n[i]){
                if(i==x-1){
                    printf("true");
                }else{continue;}
            }else{printf("error");break;}
        }
    }else{printf("false");}
    return 0;
}
