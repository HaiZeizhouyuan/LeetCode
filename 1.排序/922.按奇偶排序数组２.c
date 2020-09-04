/*************************************************************************
	> File Name: 922.按奇偶排序数组２.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月04日 星期五 21时05分42秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
 

int* sortArrayByParityII(int* A, int ASize, int* returnSize){
    int q = 1, o = 0;
    int *num = (int *)malloc(sizeof(int) * ASize);
    for (int i = 0;  i < ASize; i++) {
        if (A[i] & 1) {
            num[q] = A[i];
            q += 2;
        } else {
            num[o] = A[i];
            o += 2;
        }
    }
    *returnSize = ASize;
    return num;
}

int main() {
    int num[100];
    int n, returnSize = 0;;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    int *data  = sortArrayByParityII(num, n, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        i && printf(" ");
        printf("%d", data[i]);
    }
    printf("\n");
    return 0;
}
