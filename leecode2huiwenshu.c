#include<stdio.h>
int main(){
    int x,y,i,a=0;
    float z;
    printf("x=");
    scanf("%d",&x);
    int num[sizeof(x)];
    do{
        y=x%10;
        z=x*0.1;
        x=x/10;
       num[a++]=y;
    }while(z>1);
    for (i = 0; i < a; i++)
    {if((a)%2==0){
        if(num[i]==num[a-1-i]){
            if(i==(a)/2){
                printf("true");
                break;
            }else{ continue;}
        }else {printf("false");break;}
    }else{
        if(num[i]==num[a-1-i]){
            if(i==(a)/2){
                printf("true");
            }else{ continue;}
        }else{printf("false");break;}
    } 
    }
    return 0;
    
}
