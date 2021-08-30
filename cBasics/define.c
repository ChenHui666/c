#include<stdio.h>
#define PRICE 30; /*定义常量通常全大写*/
int main(){
    int num,total;
    num = 10;
    total = num * PRICE;
    printf("total = %d\n",total);
    return 0;
    /**
     *  10的源码（2进制） 00001010
     *  取反             11110101
     *  再加1，的-10的补码11110110
     * 
     **/
}