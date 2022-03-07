//在主函数中输入10个等长的字符串。用另一函数对它们排序。然后在主函数输出这10个已排好序的字符串。


#include <stdio.h>
#include <string.h>
#define n 10
void PX(char array[][32])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(*(array+i),*(array+j))<0)
            {
                char tmp[32];
                strcpy(tmp,*(array+i));
                strcpy(*(array+i),*(array+j));
                strcpy(*(array+j),tmp);

            }
        }
    }
}
int main()
{
    char array[32][32];
    int i;
    for(i=0;i<n;i++)
    {
//        scanf("%s",array[i]);
        gets(array[i]);
        if(i==(n-1))
        {
            break;
        }
        getchar();
    }
    PX(array);
    for(i=0;i<n;i++)
    {
        if(i==(n-1))
        {
            printf("%s",array[i]);
            break;
        }
        printf("%s > ",array[i]);
    }

    return 0;
}
