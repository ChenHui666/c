#include<stdio.h>
int main(){
    printf("char 的储存大小\n: %lu",sizeof(char));

    int a,b;
    a = 120, b = 121;
    //int类型用char输入会通过对应的ASCII码转换成字母，同理字母也会转为数字
    printf("%c,%c\n",a ,b);
    printf("%d,%d\n",a ,b);

    char c,d,e,f;
    c = 'a', d = 'z', e = 'A', f ='Z';
    //int类型用char输入会通过对应的ASCII码转换成字母，同理字母也会转为数字
    printf("%c,%c.%c,%c\n",c,d,e,f);
    printf("%d,%d,%d,%d\n",c,d,e,f);

    //大小写字母ASCII码相差32, 例：A = a - 32
    /**
     * char a = 'a' 不能 char a = "a" 字符串结尾默认加\0(ASCII码为0)
     * 字符串在内存中的储存列："C program" C program\0
     **/
    return 0;
}