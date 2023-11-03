#include<stdio.h>
int main(){
    int n,m,i,b;
    printf("请输入学生个数：");scanf("%d",&n);
    printf("请输入科目个数；");scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(b=0;b<m;b++){
            printf("请输入第%d位学生的%d成绩",i+1,b+1);
            scanf("%d",&a[i][b]);
        }
    }
    float average1[n];
    float average2[m];
    int sum1[n];
    int sum2[m];
    for(i=0;i<n;i++){
        sum1[i]=0;
        for(b=0;b<m;b++){
            sum1[i]=a[i][b]+sum1[i];
        } average1[i]=sum1[i]/m;
    }
    for(i=0;i<m;i++){
        sum2[i]=0;
        for(b=0;b<n;b++){
            sum2[i]=a[b][i]+sum2[i];
        }average2[i]=sum2[i]/n;
    }
    for(i=0;i<n;i++){
        printf("第%d位的平均分为%.2f\n",i+1,average1[i]);
    }
    for(i=0;i<m;i++){
        printf("第%d门课的平均分为%.2f\n",i+1,average2[i]);
    }
    return 0;

}
