#include<stdio.h>
int length(const char x[]){
    int len=0,i=0;
    while(x[i]!='\0'){
        len++;
        i++;
    }
    return len;
}
int main(){
    int i,z;
    char x[100];
    scanf("%[^\n]",x);
    int y=length(x);
    for(i=y-1;;i--){
        if(x[i]==' '){
            z=y-i;
            break;
        }
    }
    printf("%d",z-1);
    return 0;

}
