#include<stdio.h>
int main(){
    int i,a=0;
    char p[100];
    scanf("%s",p);
    for(i=0;i<100;i++){
        if(p[i]!='\0'){
            a++;
        }else{break;}
    }
    if(a%2==1){
        printf("wrong");
    }else{
        for(i=0;i<100;i++){
            if(i!=a/2-1){
            if(p[i]=='('){
                if(p[a-1-i]==')'){
                    continue;
                }else{printf("wrong");break;}
            }
            if(p[i]=='['){
                if(p[a-1-i]==']'){
                    continue;
                }else{printf("wrong");break;}
            }
            if(p[i]=='{'){
                if(p[a-1-i]=='}'){
                    continue;
                }else{printf("wrong");break;}
            }}else{printf("right");break;}   
        }
    }
    return 0;
        
}
