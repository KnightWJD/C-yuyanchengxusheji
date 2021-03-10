//±àĞ´³ÌĞò,Êä³ö:
//*****
//    *****
//        *****
//            *****

#include <stdio.h>
#define column 4

int main()
{
    int i = 0;
    int j = 0;
    for(i=0;i<column;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("    ");
        }

        printf("*****\n");
    }
    return 0;
}
