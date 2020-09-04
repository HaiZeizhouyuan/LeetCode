/*************************************************************************
	> File Name: 17.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月03日 星期四 20时28分38秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int* printNumbers(int n, int* returnSize){
    int max_size = pow(10, n);
    *returnSize = max_size - 1;
    int *num = (int *)malloc(sizeof(int) * max_size);
    for (int i = 1; i < max_size; i++ ) {
        num[i - 1] = i;
    }
    return num;
}

int main () {
    int n;
    while(~scanf("%d", &n)) {}
    return 0;
}
