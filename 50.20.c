#include<stdio.h>
int main(){
    int a;
    float sum=0;
    int b,i;
    printf("请输入组数");
    scanf("%d",&b);
    int d[b];
    for(i=0;i<b;i++){
        printf("请输入数字个数");
        scanf("%d",&d[i]);
    }
    for(i=0;i<b;i++){
        for(a=1;a<=d[i];a++){
        if(a%2!=0){
            sum=sum+1.0/a;
            printf("%d",sum);
        }else{
            sum=sum-1.0/a;
            printf("%d",sum);
        }
        
       }   
         printf("%.2f ",sum);
         sum=0;



    }
    
}
