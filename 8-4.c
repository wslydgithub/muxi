#include<stdio.h>
void bsort (int a[],int n ){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if (a[j-1]<a[j]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] =temp;

            }
        }
    }
}
int main()
{
    int a,i;
    puts("请输入数的总量");
    scanf("%d",&a);
    int num[a];
    for(i=0;i<a;i++){
        printf("num[%d]=",i);
        scanf("%d",&num[i]);

    }
    bsort(num,a);
    for(i=0;i<a;i++){
        printf("%2d",num[i]);
    }
    return 0;


    
}
