#include<stdio.h>
int main(){
    int a,i,b;
    printf("请输入数字");
    scanf("%d",&a);
    int c=10,d=1;
    while(a%c!=a){
        d++;
        c=c*10;
    }
    int x[d];
    for(b=0;b<d;b++){
        x[b]=a%10;
        a=a/10;
    }
    int n[10]={0};
    for(b=0;b<d;b++){
        switch (x[b]){
            case 0: n[0]++; break;
            case 1: n[1]++; break;
            case 2: n[2]++; break;
            case 3: n[3]++; break;
            case 4: n[4]++; break;
            case 5: n[5]++; break;
            case 6: n[6]++; break;
            case 7: n[7]++; break;
            case 8: n[8]++; break;
            case 9: n[9]++; break;
        }
    }
    for(b=0;b<=9;b++){
        printf("%d:%d\n",b,n[b]);
    }
    return 0;

}
