#include<stdio.h>
#define PRICE 30; /*���峣��ͨ��ȫ��д*/
int main(){
    int num,total;
    num = 10;
    total = num * PRICE;
    printf("total = %d\n",total);
    return 0;
    /**
     *  10��Դ�루2���ƣ� 00001010
     *  ȡ��             11110101
     *  �ټ�1����-10�Ĳ���11110110
     * 
     **/
}