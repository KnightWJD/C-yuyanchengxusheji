                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//题目见书P109


#include <stdio.h>


int main()
{
    float i ;
    float bonus;
    float a1 = 100000*0.1;
    float b1 = 100000;
    float a2 = 100000*0.075;
    float b2 = 200000;
    float a3 = 200000*0.05;
    float b3 = 400000;
    float a4 = 200000*0.03;
    float b4 = 600000;
    float a5 = 400000*0.015;
    float b5 = 1000000;
p:
    printf("请输入当月利润\n");
    scanf("%f",&i);

//   //用if解决
//    if(i<=b1 && i>=0)
//    {
//        bonus = 0.1*i;
//    }
//    else if(i>b1 && i<=b2)
//    {
//        bonus = a1 + ((i-b1)*0.075);
//    }
//    else if(i>b2 && i<=b3)
//    {
//        bonus = a1 + a2 + ((i-b2)*0.05);
//    }
//    else if(i>b3 && i<=b4)
//    {
//        bonus = a1+a2+a3+((i-b3)*0.03);
//    }
//    else if(i>b4 && i<=b5)
//    {
//        bonus = a1+a2+a3+a4+((i-b4)*0.015);
//    }
//    else if(i>b5)
//    {
//        bonus = a1+a2+a3+a4+a5+((i-b5)*0.01);
//    }
//    else
//    {
//        printf("输入数据有误,请重新输入\n");
//        goto p;
//    }






    //用switch解决
    int branch = ((int)i)/100000;
    if(i<0)
    {
        printf("输入数据有误,请重新输入\n");
        goto p;
    }
    switch(branch)
    {
        case 0:bonus=i*0.1;break;
        case 1:bonus = a1 + ((i-b1)*0.075);break;
        case 2:
        case 3:bonus = a1 + a2 + ((i-b2)*0.05);break;
        case 4:
        case 5:bonus = a1+a2+a3+((i-b3)*0.03);;break;
        case 6:
        case 7:
        case 8:
        case 9:bonus = a1+a2+a3+a4+((i-b4)*0.015);break;
        default:bonus = a1+a2+a3+a4+a5+((i-b5)*0.01);break;
    }







    printf("您的奖金总数为\t%.2f\n",bonus);
    return 0;
}
