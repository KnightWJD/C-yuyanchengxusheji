//用指针数组处理,上一题目,字符串不等长

#include <stdio.h>
#include <string.h>

#define n 5

void disposal(char *array[])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(array[i],array[j]) < 0)
            {
                char *tmp;
                tmp = array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
        }
    }
}

int main()
{
    char array[n][32];

    char *p[n];
    int i;
    for(i=0;i<n;i++)
    {
        p[i] = array[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%s",array[i]);
    }
    disposal(p);
    for(i=0;i<n;i++)
    {
        if(i==(n-1))
        {
            printf("%s",p[i]);
        }
        printf("%s > ", p[i]);

    }

    return 0;
}
