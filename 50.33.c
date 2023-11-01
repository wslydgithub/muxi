#include<stdio.h>
int main(){
    int i,a,b,c;
    printf("请输入边长");
    scanf("%d",&b);
    if(b%2==0){
        a=b/2;
    }else{
        a=b/2+1;
    }
    for(i=0;i<b;i++){
        printf("a");
    }
    for(i=1;i<=a-2;i++){
        printf("\n");
        for(c=0;c<b;c++){
            if(c==0||c==b-1){
                printf("a");

            }else{
                printf(" ");
            }
    }
    }
    printf("\n");
    for(i=0;i<b;i++){
        printf("a");
    }
    return 0;

}
