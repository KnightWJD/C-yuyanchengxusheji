//将s2中的所有字符复制到s1中,不用strcpy函数,复制时,'\0',也要复制过去 '\0'后面的字符不复制
#include <stdio.h>

int main()
{
    char s1[100] ={0};
    char s2[100] ={'a','b','\0','c'};
    int i;
    for(i=0;i>=0;i++)
    {
        s1[i] = s2[i];
        if(s2[i] == '\0' )
        {
            break;
        }
    }
    printf("%s\n",s1);
    return 0;
}



