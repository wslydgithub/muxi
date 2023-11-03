#include<stdio.h>
#include<math.h>
int main(){
    float R1,p1,R2,p2,sin1,cos1,sin2,cos2;
    scanf("%f %f %f %f",&R1,&p1,&R2,&p2);
    sin1=(double)sin(p1);
    cos1=(double)cos(p1);
    sin2=(double)sin(p2);
    cos2=(double)cos(p2);
    if(R1*R2*sin2*cos1+R2*R1*sin1*cos2>0){
        printf("%.2f+%.2fi",(R1*R2*cos1*cos2-R1*R2*sin1*sin2),(R1*R2*sin2*cos1+R2*R1*sin1*cos2));
    }else{
        printf("%.2f%.2fi",(R1*R2*cos1*cos2-R1*R2*sin1*sin2),(R1*R2*sin2*cos1+R2*R1*sin1*cos2));
    }
    
    return 0;
    

    
}
