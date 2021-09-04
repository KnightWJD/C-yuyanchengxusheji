 // 有5个学生,要求输出成绩在80分以上的学生的学号和成绩




#include <stdio.h>

int main()
{
    int i = 0;
    int n[50] = {0};
    int g[50] = {0};
    for(i=1;i<=50;i++)
    {
        printf("请输入第%d个学生的学号和成绩\n",i);
        scanf("%d%d",&n[i-1],&g[i-1]);
    }
    printf("\n\n 成绩大于80的学生的学号和成绩为\n \n");

    for(i=1;i<=50;i++)
    {
        if(g[i-1]>=80)
        {
            printf("学号:%d   成绩:%d\n",n[i-1],g[i-1]);
        }
    }
    return 0;
}
