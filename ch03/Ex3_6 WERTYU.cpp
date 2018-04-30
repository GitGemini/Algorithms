#include <stdio.h>

char s[]="1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(){
    int c, i;
    while((c=getchar())!=EOF){
        //找错位之后的字符在常量表中的位置
        for(i=1;s[i]&&s[i]!=c;i++);
        //如果找到，则输出它的前一个字符
        if(s[i]) putchar(s[i-1]);
        else putchar(c);
    }

    return 0;
}

