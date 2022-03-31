//11.从键盘输入若干行字符(每行长度不等),输人后把它们存储到一磁盘文件中。再
//从该文件中读人这些数据,将其中小写字母转换成大写字母后在显示屏上输出。


#include <stdio.h>
#include <string.h>
#include <ctype.h>




int main()
{
    char array[1024]={0};
    FILE* f1;
    f1=fopen("array.txt","w+");
    if(f1==NULL)
    {
        printf("cannnot open array.txt");
        return 0;
    }
    while(1)
    {
        printf("请输入字符串(输入exit退出):");
//        scanf("%s",array); //scanf 不能接收空格
        gets(array);
        if(strcmp(array,"exit")==0)
        {
            break;
        }
        fprintf(f1,"%s\n",array);
    }
    rewind(f1);
    int i;
    while(!feof(f1))
    {
        memset(array,0,1024);
        fgets(array,1024,f1);
        for(i=0;array[i]!='\0';i++)
        {
            array[i]=toupper(array[i]);
        }
        printf("%s",array);
    }
    fclose(f1);
    return 0;
}
