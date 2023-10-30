#include<stdio.h>
int main()
{
    int a,i;
    printf("请输入组数");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(i<=a){
            long A,B,C;
            printf("请输入A,B,C的值");
            printf("A=");scanf("%d",&A);     
            printf("B=");scanf("%d",&B);  
            printf("C=");scanf("%d",&C);  
            if(A+B>C){
                printf("case%d:true",i);
            }else{
                printf("case%d:false",i);
            }
         }else{
            break;
         }
    }
    return 0;
    
}
