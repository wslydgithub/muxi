#include<stdio.h>
int main(){
    int a,i;
    printf("请输入数的个数");
    scanf("%d",&a);
    int num1[a];
    for(i=0;i<a;i++){
        printf("请输入第%d个数",i+1);
        scanf("%d",&num1[i]);
    }
    int b=a*(a-1),c;
    int num2[b];
    int d=0;
    for(i=0;i<a;i++){
        for(c=0;c<a;c++){
            if(i==c){
                continue;
            }else{
                num2[d]=num1[i]*10+num1[c];
                d++;
            }
        }
    }
    int sum=0;
    for(i=0;i<d;i++){
        sum=num2[i]+sum;
    }
    printf("%d",sum);
    return 0;




}
