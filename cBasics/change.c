#include<stdio.h>
int main(){
    float f,x=3,y=5.2;
    int i=4,a,b;
    a=x+y;
    b=(int)(x+y);
    f=10/i;
    printf("a=%d,b=%d,f=%f,x=%f\n",a,b,f,x);

    /**
     * 强制类型转换
     * （float）a 把a转换为实型
     **/
    float e=5.57;
    printf("(int)f=%d,f=%f\n",(int)e,e);

    return 0;
}