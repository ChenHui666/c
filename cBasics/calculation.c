#include<stdio.h>
int main(){
    /**
     * 各类数值型数据之间的混合运算
     * 
     * 1，若参与运算量的类型不同，则先转换成同一类型，然后在运算
     * 2，转换按数据长度增加的方向进行，以保证精确度不会降低，如int型和long型运算时，先吧int量转换成long型后再进行运算
     * 3，所有的浮点型运算都是以双精度进行的，即使仅含float单精度量运算的表达式，也要先转换成double型，再运算
     * 4，char型和short型参与运算时，必须先转换成int型
     * 
     * 类型自动转换规则:
     *  char，short --> int --> unsigned --> long -->dulbel
     * 
     **/

    float PI = 3.14159;
    int s,r = 5;
    s = r*r*PI;
    printf("s=%d\n",s);

    return 0;
}