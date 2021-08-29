#include<stdio.h>
//函数外定义变量x和y
int x;
int y;

int addtwonum(){
    //函数内声明变量x和y为外部变量
    extern int x;
    extern int y;

    printf("x: %d,y: %d",x,y);
    //给外部变量（全局变量）x和y赋值
    x = 1;
    y = 2;

    return x + y;
}

int main(){
    int result;
    //调用函数addtwonum
    result = addtwonum();

    printf("result 为: %d",result);

    return 0;
}