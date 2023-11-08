#include<stdio.h>
int length(const char x[]){
    int len=0;
    int i=0;
    while(x[i]=='0'||x[i]=='1'){
        i++;
        len++;
    }
    return len;
}
int main(){
    int a,i,b;
    char x[100];
    scanf("%s",x);
    int y=length(x);
    if(x[0]!='0'&&x[y-1]!='1'){
        a=0;
    }else{
        a=0;
        b=0;
        for(i=0;i<y;i++){
            if(x[i]=='0'){
                a++;
            }else b++;}
            if(a==b)a=b;
            if(a>=b)a=b;
    }
    printf("%d",a);
    return 0;
}
