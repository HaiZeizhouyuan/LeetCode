/*************************************************************************
	> File Name: 1491.去掉最低工资和最高工资后的工资平均值.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月04日 星期五 16时09分23秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
 
double average(int* salary, int salarySize){
    int min_wage = 1000000, max_wage = 0, sum_wage = 0;
    for (int i = 0; i < salarySize; i++) {
        int tmp = salary[i];
        if (tmp > max_wage) max_wage = tmp;
        if (tmp < min_wage) min_wage = tmp;
        sum_wage += tmp;
    }
    return (sum_wage - max_wage - min_wage) * 1.0 / (salarySize - 2);
}

int main() {
 
    return 0;
}
