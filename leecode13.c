#include<stdio.h>
int jiecheng(int x){
    if(x>0){
        return x*jiecheng(x-1);
    }else return 1;
}
void strange(int n){
    int i;
    for(i=0;i<=n;i++){
        int y;
        y=(jiecheng(n))/(jiecheng(i)*jiecheng(n-i));
        printf("%d ",y);
        if(i==n){
            printf("\n");
        }

    }
}
int main(){
    int i,z;
    printf("请输入行数");
    scanf("%d",&z);
    for(i=1;i<=z;i++){
        if(i==1){
            printf("1\n");
        }else{
            strange(i);
        }
    }
    
}
