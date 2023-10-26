#include<stdio.h>
int main()
{
	int a,b;
	printf("1       是素数\n"); 
for (a = 2; a <= 100; a++) {
        for (b = 2; b <= (a / b); b++) {
            if (a%b == 0) {
                break;
            }
        }
        if( b > (a / b)) {
            printf("%d\t是素数\n", a);
        }
    }
	return 0; 
} 
