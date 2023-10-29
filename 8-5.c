#include<stdio.h>
enum sex {boy,girl,tuichu};
void Boy() {
    printf("男孩");
}
void Girl(){
    printf("女孩");
}
enum sex sexx()
{
    int tmp;
    do{
        printf("0……boy 1……girl 2……退出");
        scanf("%d",&tmp);
    }while(tmp<boy||tmp>tuichu);
    return tmp;
}
int main()
{
    enum sex selected;
    do{
        switch(selected=sexx()){
            case boy : Boy();break;
            case girl : Girl();break;
        }
    }while(selected!=tuichu);
    return 0;
}

