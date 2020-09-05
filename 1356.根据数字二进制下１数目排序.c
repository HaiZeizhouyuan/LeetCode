/*************************************************************************
	> File Name: 1356.根据数字二进制下１数目排序.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月05日 星期六 16时44分01秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int arr[10005];
int one_num(int num) {
    int ans = 0;
    while(num > 0) {
        num &= num - 1;
        ans++;
    }
    return ans;
}

int cmp(const void *a, const void *b) {
    int __a = *(int *)a, __b = *(int *)b;
    int num_a = one_num(__a), num_b = one_num(__b);
    return (num_a == num_b) ? __a - __b : num_a - num_b;
}

int* sortByBits(int* arr, int arrSize, int* returnSize){
    qsort(arr, arrSize, sizeof(int), cmp);
    (*returnSize) = arrSize;
    return arr;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int returnSize = 0;
    sortByBits(arr, n, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        i && printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
