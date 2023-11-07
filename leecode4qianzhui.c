#include<stdio.h>
void wore(const char x[],const char y[],const char z[]){
    int i=0;
    while (x[i]!='/0'&&y[i]!='/0'&&z[i]!='/0'){
        if((x[i]==y[i])&&(y[i]==z[i])){
        printf("%c",x[i]);
        i++;}
        else {break;}} 
}
int main(){
    char x[100];
    char z[100];
    char y[100];
    scanf("%s",x);
    scanf("%s",z);
    scanf("%s",y);
    if(((x[0]!=y[0])||(x[0]!=z[0]))||(y[0]!=z[0])){
        printf("没有共同前缀");
    }else wore(x,z,y);
    return 0;

}
