#include <stdio.h>

char s[]="1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(){
    int c, i;
    while((c=getchar())!=EOF){
        //�Ҵ�λ֮����ַ��ڳ������е�λ��
        for(i=1;s[i]&&s[i]!=c;i++);
        //����ҵ������������ǰһ���ַ�
        if(s[i]) putchar(s[i-1]);
        else putchar(c);
    }

    return 0;
}

