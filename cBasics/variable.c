#include<stdio.h>
//�����ⶨ�����x��y
int x;
int y;

int addtwonum(){
    //��������������x��yΪ�ⲿ����
    extern int x;
    extern int y;

    printf("x: %d,y: %d",x,y);
    //���ⲿ������ȫ�ֱ�����x��y��ֵ
    x = 1;
    y = 2;

    return x + y;
}

int main(){
    int result;
    //���ú���addtwonum
    result = addtwonum();

    printf("result Ϊ: %d",result);

    return 0;
}