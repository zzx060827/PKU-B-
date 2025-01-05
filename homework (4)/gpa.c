#include <stdio.h>

// 函数声明，用于计算单个课程的绩点
double calculateGPA(int score);

int main() {
    int n, i;
    double totalGPA = 0.0, totalCredits = 0.0, courseGPA,GPA=0.0;

    scanf("%d", &n); // 读取总的课程数
    double courseCredits[n], courseScore[n];

    // 读取学分和成绩
    for (i = 0; i < n; i++) {
        scanf("%lf", &courseCredits[i]); 
        
    }
    for (i = 0; i < n; i++) {
        scanf("%lf", &courseScore[i]); 
        
    }
    for (i = 0; i < n; i++) {
        courseGPA = calculateGPA(courseScore[i]); // 计算单个课程的绩点
        totalGPA += courseGPA * courseCredits[i]; // 累加学分绩点
        totalCredits += courseCredits[i]; // 累加总学分
    }

    // 计算总评绩点
    if (totalCredits != 0) {
        GPA = totalGPA / totalCredits;
    } else {
        GPA = 0;
    }

    printf("%.2f\n", GPA);

    return 0;
}

// 函数定义，根据成绩计算绩点
double calculateGPA(int score) {
    if (score >= 90) return 4.0;
    else if (score >= 85) return 3.7;
    else if (score >= 82) return 3.3;
    else if (score >= 78) return 3.0;
    else if (score >= 75) return 2.7;
    else if (score >= 72) return 2.3;
    else if (score >= 68) return 2.0;
    else if (score >= 64) return 1.5;
    else if (score >= 60) return 1.0;
    else return 0.0;
}