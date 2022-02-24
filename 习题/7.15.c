//写几个函数:
//输入10个职工的姓名和职工号
//按职工号由小到大顺序排序,姓名顺序也随之调整
//要求输入一个职工号,用折半查找法找出该职工的姓名,从主函数输入要查找的职工号,输出该职工姓名

#include <stdio.h>
#include <string.h>

#define N 10
#define Name_Size 10


void Input_Information(int Number[],char Name[][Name_Size])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("\n请输入第%d个员工的信息:\n",i+1);
        printf("姓名:\n");
        gets(Name[i]);
        printf("职工号:\n");
        scanf("%d",&Number[i]);
        getchar();  // 用于忽略gets读取到回车
    }
}

void Output_Information(int Number[],char Name[][Name_Size])
{
    int i;
    printf("\n姓名    职工号\n");
    for(i=0;i<N;i++)
    {
        printf("[%s] : [%d]\n",Name[i],Number[i]);
    }
}

void Sort(int Number[],char Name[][Name_Size])
{
    int tmp,i,j;
    char Name_Tmp[Name_Size]={0};
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++) // j<N-i-1 : 每次循环的时候比上一次要少一位 ,开始是N-1 ,然后就是N-2....
        {
            if(Number[j]>Number[j+1])
            {
                tmp = Number[j+1];
                Number[j+1] = Number[j];
                Number[j]=tmp;

                strcpy(Name_Tmp,Name[j]);
                strcpy(Name[j],Name[j+1]);
                strcpy(Name[j+1],Name_Tmp);
            }
        }

    }

}

void Find(int Number[],char Name[][Name_Size],int find_name)
{
    int i=0;
    for(i=0;i<N;i++)
    {
        if(Number[i]==find_name)
        {
            printf("姓名: %s",Name[i]);
            return 0;
        }
    }
}

int main()
{
    int Number[N]={0};
    char Name[N][Name_Size]={0};//职工号对应的职工姓名 //字符串不止占一行,所以要用二维数组给它定义大小

    Input_Information(Number,Name);
    Output_Information(Number,Name);
    Sort(Number,Name);
    Output_Information(Number,Name);
    printf("请输入你要查找的员工号:\n");
    int find_name;
    scanf("%d",&find_name);
    Find(Number,Name,find_name);
    return 0;
}
