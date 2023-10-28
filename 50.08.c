#include<stdio.h>
int main()
{
    int i,a;
    printf("请输入评委的人数");
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++){
        printf("请输入第%d位评委的分数",i+1);
        scanf("%d",&x[i]);
    }
    int max=x[0],min=x[0];
    for(i=0;i<a;i++){
        if(x[i]>=max){
            max=x[i];
        }
        if(x[i]<=min){
            min=x[i];
        }
    }
    int y=1;
    int b[a];
    for(i=0;i<a;i++){
        if(x[i]!=max && x[i]!=min){
           b[y-1]=x[i];
           y++;
        }
    }
    double sum=0;
    for(i=0;i<y;i++){
        sum=sum+b[i];

    }
    
    printf("average is %f",sum/(y-1));
    return 0;
}
