#include <stdio.h>

typedef struct{
    int id;
    int passed;
} stu;

void sort(stu arr[], int n)
{

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j].id>arr[j+1].id)
            {
                stu temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j].passed<arr[j+1].passed)
            {
                stu temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}


int main() 
{
    int n;scanf("%d",&n);
    stu student[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&student[i].id,&student[i].passed);
    }
    sort(student,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",student[i].id);
    }
    return 0;
}