#include<stdio.h>
int many(int a){
    int b,c,d,e,f,g,h,i,j,k;
    b=a%100;//除去100后
    c=(a-b)/100;
    d=b%50;//出去50后
    e=(b-d)/50;
    f=d%10;//除去10
    g=(d-f)/10;
    h=f%2;//除去2
    i=(f-h)/2;
    j=a-c*100-e*50-i*2-g*10;
    k=c+e+i+j+g;
    return k;
}
int main(){
    int a,i;
    printf("请输入老师的个数");
    scanf("%d",&a);
    int money[a],num[a],sum=0;
    for(i=0;i<a;i++){
        scanf("%d",&money[i]);
    }
    for(i=0;i<a;i++){
        num[i]=many(money[i]);
    }
    for(i=0;i<a;i++){
        sum=sum+num[i];
    }
    printf("%d",sum);
    return 0;





}
