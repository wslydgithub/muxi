#include<stdio.h>
int main(){
    int a,i,x=0,y=0;
    printf("请输入组数");
    scanf("%d",&a);
    int num1[a],num2[a],num3[a],num4[a];
    for(i=0;i<a;i++){
        scanf("%d %d %d %d",&num1[i],&num2[i],&num3[i],&num4[i]);
    }
    for(i=0;i<a;i++){
        if(num1[i]+num3[i]==num2[i]&&num1[i]+num3[i]!=num4[i]){
            x=x+1;

        }
        if(num1[i]+num3[i]!=num2[i]&&num1[i]+num3[i]==num4[i]){
            y=y+1;
        }
    }
    printf("%d %d",y,x);
    return 0;






    }
