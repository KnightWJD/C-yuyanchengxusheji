//写一个函数,将一个字符串的元音字符复制到另一个字符串,然后输出

#include <stdio.h>
void Vowel_Choicing(char array_Vowel[])
{
    int i;
    printf("其中的元音字符为:\n");
    for(i=0;array_Vowel[i] != '\0';i++)
    {
        if((array_Vowel[i] == 'a') || (array_Vowel[i] == 'e') || (array_Vowel[i] == 'i') || (array_Vowel[i] == 'o') || (array_Vowel[i] == 'u') || (array_Vowel[i] == 'A') || (array_Vowel[i] == 'E') || (array_Vowel[i] == 'I') || (array_Vowel[i] == 'O') || (array_Vowel[i] == 'U'))
        {
            printf("%c ",array_Vowel[i]);
        }
    }
}

int main()
{
    char array_one[100]={0};
    printf("请输入一个字符串\n");
    gets(array_one);
    Vowel_Choicing(array_one);
    return 0;
}
