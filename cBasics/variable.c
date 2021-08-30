#include<stdio.h>
//函数外定义变量x和y
int x;
int y;

int addtwonum(){
    /* *
     *  整形变量
     *  1，基本型：int，在内存中占4个字节
     *  2，短整量：short int或short
     *  3，长整型：long int或long 
     *  4，无符号型：unsigned
     *  
     *  有符号和无符号整形进行运算结果为有符号整形
     *  输出时 %d 为整形
     * 
     * */
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