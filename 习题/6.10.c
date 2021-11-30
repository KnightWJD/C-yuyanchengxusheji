                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//有一篇文章,共有3行文字,每行有80个字符.要求分别统计出其中英文大写字母,小写字母,数字,空格和其他字符的个数

#include <stdio.h>

int main()
{
    char array_Character[3][80];
    int i,j;
    int Capital=0,Lowercase=0,number=0,space=0,other=0;
    printf("please input the first sentence(<=80)\n");
    gets(array_Character[0]);
    printf("please input the second sentence(<=80)\n");
    gets(array_Character[1]);
    printf("please input the third sentence(<=80)\n");
    gets(array_Character[2]);

    for(i=0;i<3;i++)
    {
        for(j=0;array_Character[i][j]!='\0';j++)
        {
            if(array_Character[i][j]>='A' && array_Character[i][j]<='Z')
            {
                Capital++;
            }
            else if(array_Character[i][j]>='a' && array_Character[i][j]<='z')
            {
                Lowercase++;
            }
            else if(array_Character[i][j]==' ')
            {
                space++;
            }
            else if(array_Character[i][j] >='0' && array_Character[i][j]<='9')
            {
                number++;
            }
            else
            {
                other++;
            }
        }
    }
    printf("\n");
    printf("The number of capital letter is %d\n",Capital);
    printf("The number of lowercase is %d\n",Lowercase);
    printf("The number of space is %d\n",space);
    printf("The number of other character is %d\n",other);
    return 0;
}
