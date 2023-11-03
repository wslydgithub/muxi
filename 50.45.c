#include<stdio.h>
int main(){
    int a=0,b=0,c=0,d=0,i,min;
    char n[100];
    scanf("%s",n);
    for(i=0;i<100;i++){
        switch (n[i])
    {case 'Z':a++;break;
    case 'O':b++;break;
    case 'J':c++;break;
    }}
    min=a;
    if(b<=min)min=b;
    if(c<=min)min=c;
    for(i=0;i<min;i++){
        printf("ZOJ");
    }
    if(min==a){
        b=b-min;c=c-min;
        if(b<=c){
            for(i=0;i<b;i++){
                printf("OJ");
            }
            c=c-b;
            for(i=0;i<c;i++){
                printf("J");
            }
        }else{
            for(i=0;i<c;i++){
                printf("OJ");
            }
            b=b-c;
            for(i=0;i<b;i++){
                printf("O");
            }
        }
    }
    if(min==b){
        a=a-min;c=c-min;
        if(a<=c){
            for(i=0;i<a;i++){
                printf("ZJ");
            }
            c=c-a;
            for(i=0;i<c;i++){
                printf("J");
            }
        }else{
            for(i=0;i<c;i++){
                printf("ZJ");
            }
            a=a-c;
            for(i=0;i<a;i++){
                printf("Z");
            }
        }
    }
    if(min==c){
        b=b-min;a=a-min;
        if(b<=a){
            for(i=0;i<b;i++){
                printf("ZO");
            }
            a=a-b;
            for(i=0;i<a;i++){
                printf("Z");
            }
        }else{
            for(i=0;i<a;i++){
                printf("ZO");
            }
            b=b-a;
            for(i=0;i<b;i++){
                printf("O");
            }
        }
    }
    return 0;

    
}
