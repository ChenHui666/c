#include <stdio.h>
#include <math.h>

int main(){
    /*我的第一个C程序*/
    printf("hello world! C \n");

    double x,s;
    printf("input number:\n");
    scanf("%lf",&x);
    s = sin(x);
    printf("sin of %lf is %lf\n",x,s);

    return 1;
}