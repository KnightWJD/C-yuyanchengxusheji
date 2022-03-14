//(1)   ,此函数应返回一个指针(地址)，指向字符串开始的空间。new(n)表示分配n个字节的内存空间。
//(2)写一函数free,将前面用new函数占用的空间释放。free(p)表示将p(地址)指向的单元以后的内存段释



#include <stdio.h>

#define size 2000
char array[size];
char *p1 = array;

void *new(unsigned int n)
{
    if(p1+n <= array+size)
    {
        p1 +=n;
        return p1-n;
    }
    else
    {
        return NULL;
    }
}

void free(char *p)
{
    if(p >= array && p<= array+size)
    {
        p1 = p;
        return p1;
    }
}

int main()
{
    unsigned int n = 10;
    scanf("%s",array);
    new(n);
    printf("%s\n",array);
    char pt;
    free(pt);
    return 0;
}
