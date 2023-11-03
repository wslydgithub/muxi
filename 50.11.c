#include<stdio.h>
int main(){
   int a,b;
   printf("请输入总人数");
   scanf("%d",&a);
   printf("请输入大富翁人数");
   scanf("%d",&b);
   int x[a],y[b],i,d,e=0;
   for(i=0;i<a;i++){
     printf("请输入第%d的财富",i+1);
     scanf("%d",&x[i]);
   }
   if(a<b){
    for(i=0;i<a;i++){
        printf("%d ",x[i]);
    }
   }else{
    int max=x[0];
loop: for(i=0;i<a;i++){
        if(x[i]>=max)max=x[i];
        d=i;
        if(i==a-1){x[d]=0;}
        else{continue;}
    }
    y[e]=max;
    max=0;
    e++;
    if(e<b) goto loop;
    for(i=0;i<b;i++){
        printf("%d ",y[i]);
    }
    return 0; 


   }
}
