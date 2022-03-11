//输入一个字符串
//将其中连续的数字作为一个整数,依次存放到一数组a中。例如,123放在a[0].
//456放在a[1].....统计共有多少个整数.并输出这些数。

#include <stdio.h>
#include <stdlib.h>
void inT(char *p)
{
    int i,j,count=0,n=0,k;
    int a[32]={0};
    for(i=0;*(p+i)!='\0';i++)
    {
        char array[32]={0};
        count =0;
        if(*(p+i)>='0' && *(p+i)<='9')
        {
            for(j=0;j>=0;j++)
            {
                if(*(p+i+j)>='0' && *(p+i+j)<='9')
                {
                    array[j] = *(p+i+j);
                    count++;
                }
                else
                {
                    if(count>=2)
                    {
                        k = atoi(array);
                        a[n] =(int){k};
                        i+= count-1;
                        n++;
                    }


                    break;
                }
            }
        }

    }
    printf("这个字符串中有 %d 个连续的数字,分别是:\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    char arr[32];
    scanf("%s",arr);
    inT(arr);
    return 0;
}
