#include<stdio.h> //用于输入和输出语句的时候
int main(){
    printf("int 的储存大小: %lu \n",sizeof(int));
    short int a,b;
    a = 32767; //超过整形范围
    b = a + 1;
    printf("%d,%d \n",a,b);
    return 0;
}