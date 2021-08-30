#include<stdio.h>
#include<float.h>
int main(){
    /**
     * 实型变量分类
     * 单精度（float型）
     * 双精度型（double型）
     * 长精度型（long duble型）
     **/
    printf("float 存储最大字节数：%lu \n",sizeof(float));
    printf("float 最小值：%E \n",FLT_MIN);
    printf("float 最大值：%e \n",FLT_MAX);
    printf("float 精确值：%d \n",FLT_DIG);
    return 0;
}