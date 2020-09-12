/*************************************************************************
	> File Name: 53.0~n-1中缺失的数字.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月12日 星期六 12时19分12秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
#define max_n 10000

int search(int *nums, int n) {
    int l = 0, r = n, mid;
    while(l < r) {
        mid = (l + r) >> 1;
        if (nums[mid] == mid) l = mid + 1;
        else r = mid;
    }
    return l;
}

int main() {
    int nums[max_n + 5], n = 0;
    for (int i = 0; ; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] == -1) break;
        n++;
    }

    printf("%d\n", search(nums, n));
    return 0;
}
