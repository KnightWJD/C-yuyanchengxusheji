// 编写一个程序,将两个字符串连接起来,不要用strcat函数


#include <stdio.h>

int main()
{
    char array_one[3]={'a','c'};
    char array_two[3]={'b','d'};
    char array_three[100]={0};
    int i,j,k;
    for(i=0;i>=0;i++)
    {
        if(array_one[i] != '\0')
        {
            array_three[i] = array_one[i];
        }
        else
        {
            for(j=0,k=i;j>=0;j++,k++)
            {
                if(array_two[j] != '\0')
                {
                    array_three[k]=array_two[j];

                }
                else
                {
                    goto goto_one;
                }
            }

        }
    }
goto_one:
    printf("%s\n",array_three);
    return 0;
}



