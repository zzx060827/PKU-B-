#include <stdio.h>

// 定义结构体 Patient
typedef struct {
    char name[20];
    int age;
    float temperature;
    int cough;
} Patient;

int main() 
{
    int n;
    scanf("%d", &n);
    
    Patient patients[n]; // 使用 Patient 类型的数组

    for(int i = 0; i < n; i++) 
    {
        scanf("%s %d %f %d", patients[i].name, &patients[i].age, &patients[i].temperature, &patients[i].cough);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(patients[j].age < patients[j+1].age)
            {
                Patient temp = patients[j];
                patients[j] = patients[j+1];
                patients[j+1] = temp;
            }
            else if(patients[j].age == patients[j+1].age)
            {
                if(patients[j].name[0] > patients[j+1].name[0])
                {
                    Patient temp = patients[j];
                    patients[j] = patients[j+1];
                    patients[j+1] = temp;
                }
            }
        }
    }

    for(int i = 0; i < n; i++) 
    {
        if(patients[i].temperature >= 37.5 && patients[i].cough == 1)
        {
            printf("%s %d %g\n", patients[i].name,patients[i].age,patients[i].temperature);
        }
    }

    return 0;
}
