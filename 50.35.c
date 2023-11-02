#include<stdio.h>
int main(){
    int a,i=0,c,x,b=0;
    float max;
    printf("请输入组数\n");
    scanf("%d",&a);
    while(b<a){
        printf("请输入学生数\n");
        scanf("%d",&c);
        float height[c];
        printf("请输入身高数\n");
        for(i=0;i<c;i++){
            scanf("%f",&height[i]);
        }
        max=height[0];
        for(i=0;i<c;i++){
            if(max<=height[i]) max=height[i];
        }

        printf("%f\n",max);
        b++;     
    }
    return 0;
}
