#include<stdio.h>
#include<float.h>
int main(){
    /**
     * ʵ�ͱ�������
     * �����ȣ�float�ͣ�
     * ˫�����ͣ�double�ͣ�
     * �������ͣ�long duble�ͣ�
     **/
    printf("float �洢����ֽ�����%lu \n",sizeof(float));
    printf("float ��Сֵ��%E \n",FLT_MIN);
    printf("float ���ֵ��%e \n",FLT_MAX);
    printf("float ��ȷֵ��%d \n",FLT_DIG);
    return 0;
}