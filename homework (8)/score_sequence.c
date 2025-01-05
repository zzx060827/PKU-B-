#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Student
{
    char id[10];
    char name[10];
    int age;
    char sex;                 // 性别 'F' 或 'M'
    double homeworkGrade;     // 平时作业
    double midExamGrade;      // 期中成绩
    double practiceGrade;     // 实验题
    double finalExamGrade;    // 期末成绩
    double finalGrade;        // 总成绩
};
#define EPS 0.000006

int main()
{
    struct Student stu[100];int n;scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d %c %lf %lf %lf %lf",stu[i].id,stu[i].name,&stu[i].age,&stu[i].sex,&stu[i].homeworkGrade,&stu[i].midExamGrade,&stu[i].practiceGrade,&stu[i].finalExamGrade);
        stu[i].finalGrade=(stu[i].homeworkGrade*0.15+stu[i].midExamGrade*0.15+stu[i].practiceGrade*0.1+stu[i].finalExamGrade*0.6)+0.00001;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            struct Student t;
            if(fabs(stu[j].finalGrade-stu[j+1].finalGrade)<EPS)
            {
                if(fabs(stu[j].id[0]>stu[j+1].id[0]))
                {
                    t=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=t;
                }
            }
            else if(stu[j].finalGrade<stu[j+1].finalGrade)
            {
                t=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%-10s%-10s%2d %c %6.2lf\n",stu[i].id,stu[i].name,stu[i].age,stu[i].sex,round(stu[i].finalGrade * 100) / 100.0);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(stu[i].sex=='F')
        printf("%-10s%-10s%2d %c %6.2lf\n",stu[i].id,stu[i].name,stu[i].age,stu[i].sex,round(stu[i].finalGrade * 100) / 100.0);
    }
}