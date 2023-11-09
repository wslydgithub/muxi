#include<stdio.h>
int main(){
    int m,i;
    printf("请输入数的值");
    scanf("%d",&m);
    for(i=0;;i++){
        if(i*i<=m){
            if((i+1)*(i+1)>m){
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}
