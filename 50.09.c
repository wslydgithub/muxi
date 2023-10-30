#include<stdio.h>
int main (){
    int year,month,day;
    puts("请输入日期");
    scanf("%d/%d/%d",&year,&month,&day);
    int a,num;
    if(year%4==0){
        if(year%100!=0){
            a=1;
        }else {
            if(year%400==0){
            a=1;
        }else{
            a=0;
        }
        }
    }else{
        a=0;
    }
    if(a==1){
        if(month%2==0){
            num=month/2*61-1+day;

        }else{if(month==1){
            num=day;
        }else{
            num=(month-1)*61+31-1+day;
        }}
    }
    if(a==0){
        if(month%2==0){
            num=month/2*61-2+day;
        }else{if(month==1){
            num=day;
        }else{
            num=(month-1)/2*61+31-2+day;
        }
            
        }
    }
    printf("为第%d天",num);
    return 0;
}
