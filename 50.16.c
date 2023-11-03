#include<stdio.h>
int main (){
    int i=0,num1=0,num2=0,num3=0,num4=0,num5=0;
    char x[100];printf("请输入\n");
    scanf("%s",x);for(i=0;i<100;i++){
        switch (x[i]){
            case 'a':num1++;break;
            case 'e':num2++;break;
            case 'i':num3++;break;
            case 'o':num4++;break;
            case 'u':num5++;break;
        }
    }
    printf("a:%d\n",num1);
    printf("e:%d\n",num2);
    printf("i:%d\n",num3);
    printf("o:%d\n",num4);
    printf("u:%d\n",num5);
    return 0;
    
}
