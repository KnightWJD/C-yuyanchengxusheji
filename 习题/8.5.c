//有 n 个人围成一圈,顺序排号。从第 1 个人开始报数,（从1到3报数）,凡报到3的人退出圈子,问最后留下的是原来第几号的那位


#include <stdio.h>


#define n 15
int array_final[n]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int j;


int disposal(int *p,int len,int count,int k)
{

    int i;
    if(len ==1)
    {
       return array_final[0];
    }
    for(i=0,j=0;i<len;i++)
    {
        if(count == 0)
        {
            if((i+1)%3==0)
            {
                continue;
            }
        }
        if(count !=0)
        {
            if((i+k+1)%3==0)
            {
                continue;
            }
        }

        array_final[j]=*(p+i);
        j++;
    }

    k = len%3+k;
    if(k>2)
    {
        k = k%3;
    }


    len = j;
    count++;

    disposal(array_final,len,count,k);
}

int main()
{

    int count=0;
    int k=0;
    int final = disposal(array_final,n,count,k);
    printf("最后剩下的人是:  %d 号\n",final);
    return 0;
}
