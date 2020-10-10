/*************************************************************************
	> File Name: 16.08.整数的英文表示.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月27日 星期日 21时25分58秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
 
int dight(int num) {
    return log10(num) + 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", dight(n));
    return 0;
}
