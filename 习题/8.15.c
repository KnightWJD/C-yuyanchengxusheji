// 有一个班4个学生,5门课程。①求第1门课程的平均分;②找出有两门以上课程
//不及格的学生,输出他们的学号和全部课程成绩及平均成绩;③找出平均成绩在90分以上
//或全部课程成绩在85分以上的学生。分别编3个函数实现以上3个要求。

#include <stdio.h>
#define n_s 4
#define n_c 5
void first_course_average(int *p)
{
    double average;
    int sum=0,i;
    {
        for(i=0;i<n_s;i++)
        {
            sum+=*(p+i*n_c);
        }
    }
    average = (double)sum/n_s;
    printf("the average of the first course is %.2lf",average);
}

void fail(int *pi,int course[n_s][n_c])
{
    int i,j,count,count_1=0,sum=0;
    int array[4]={0};
    double average;
    for(i=0;i<n_s;i++)
    {
        count = 0;
        for(j=0;j<n_c;j++)
        {
            if(course[i][j]<60)
            {
                count++;
            }
        }
        if(count>2)
        {
            sum =0;
            printf("\n学号: %d  全部成绩:",*(pi+i));
            for(j=0;j<n_c;j++)
            {
                printf("%d ",course[i][j]);
                sum +=course[i][j];
            }
            printf("平均分: %.2lf",(double)sum/n_c);
        }
    }
}

void over(int *pi,int course[n_s][n_c])
{
    int i,j,count,sum;
    printf("\n平均成绩在90分以上或全部课程成绩在85分以上的学生的学号为:\n");
    for(i=0;i<n_s;i++)
    {
        count=0;
        sum =0;
        for(j=0;j<n_c;j++)
        {
            if(course[i][j]>85)
            {
                count++;
            }
            sum += course[i][j];
        }
        if(sum/n_c >90 || count==5)
        {
            printf("%d ",*(pi+i));
        }
    }
}

int main()
{
    int id[n_s]={101,102,103,104};
    int course[n_s][n_c]={98,97,99,97,99,
                      53,24,85,62,34,
                      95,41,23,74,65,
                      85,24,36,15,85};
    first_course_average(course);
    printf("\n");
    fail(id,course);
    printf("\n");
    over(id,course);
    return 0;
}
