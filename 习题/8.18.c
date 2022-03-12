//18. 编一-程序,输人月份号,输出该月的英文月名。例如，输入3,则输出"March",要求
//用指针数组处理。



#include <stdio.h>
#define n 12


int main()
{
    int m;
    char *arr[n]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("请输入月份号:\n");
    scanf("%d",&m);
    printf("%s",arr[m-1]);
    return 0;
}
