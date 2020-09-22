/*************************************************************************
	> File Name: 167.两数之和2-输入有序数组.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月22日 星期二 20时28分18秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
 
int nums[100];

int func(int *numbers, int val, int r, int target) {
    int l = 1, mid;
    while(l <= r) {
        mid = (l + r) / 2;
        if (numbers[mid] + val == target) return mid;
        if (numbers[mid] + val < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
 }
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int *arr = (int *)malloc(sizeof(int) * 5);
    *returnSize = 2;
    for (int i = 1; i <= numbersSize; i++) {
        if (numbers[i] < target ) {
            int re = func(numbers, numbers[i], numbersSize, target);
            if (re != -1) {
            arr[0] = i;
            arr[1] = re;
            *returnSize = 2;
            return arr;
            }
        }
    }
    return arr;
}

int main() {
    int n, target, returnSize = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target);
    int *arr = twoSum(nums, n, target, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
