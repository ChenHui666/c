#include<stdio.h>
int main(){
    printf("char �Ĵ����С\n: %lu",sizeof(char));

    int a,b;
    a = 120, b = 121;
    //int������char�����ͨ����Ӧ��ASCII��ת������ĸ��ͬ����ĸҲ��תΪ����
    printf("%c,%c\n",a ,b);
    printf("%d,%d\n",a ,b);

    char c,d,e,f;
    c = 'a', d = 'z', e = 'A', f ='Z';
    //int������char�����ͨ����Ӧ��ASCII��ת������ĸ��ͬ����ĸҲ��תΪ����
    printf("%c,%c.%c,%c\n",c,d,e,f);
    printf("%d,%d,%d,%d\n",c,d,e,f);

    //��Сд��ĸASCII�����32, ����A = a - 32
    /**
     * char a = 'a' ���� char a = "a" �ַ�����βĬ�ϼ�\0(ASCII��Ϊ0)
     * �ַ������ڴ��еĴ����У�"C program" C program\0
     **/
    return 0;
}