#include<stdio.h>
#include<math.h>
int main(){
    int d,i;
    printf("请输入组数");
    scanf("%d",&d);
    int a[d],b[d];
    float c[d];
    for(i=0;i<d;i++){
        printf("请输入a的值");
        scanf("%d",&a[i]);
        printf("请输入b的值");
        scanf("%d",&b[i]);
        c[i]=sqrt(a[i]*a[i]+b[i]*b[i]);
    }
    float max=c[0];
    for(i=0;i<d;i++){
        if(c[i]>=max){
            max=c[i];
        }
    }
    printf("%f",max);
    return 0;
    
    

}
