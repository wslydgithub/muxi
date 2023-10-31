#include<stdio.h>
int main(){
    int a,b;
    printf("请输入开头");
    scanf("%d",&a);
    printf("请输入结尾");
    scanf("%d",&b);
    int i,z;
    int x[b];
    for(i=0;i<b;i++){
        x[i]=0;
    }
    for(i=a+1;i<b;i++){
        for(z=2;z<i;z++){
            if(i%z!=0){
                x[i]=i;
            }else{
                x[i]=0;
                break;
            }
        }
    }
    for(i=0;i<b;i++){
        if(x[i]!=0){
            printf("%d ",x[i]);
        }else{
            continue;
        }
    }
    return 0;
}
