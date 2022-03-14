//用指向指针的指针的方法对5个字符串排序并输出。


#include <stdio.h>
#include <string.h>
#define n 5
int main()
{
    char *array[]={"wjd","kct","tjj","low","wfg"};
    int **p=array;

    int i,j;
    char *tmp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(strcmp(*(p+i),*(p+j))>0)
            {
                tmp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tmp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s ",*(p+i));
    }

    return 0;
}
