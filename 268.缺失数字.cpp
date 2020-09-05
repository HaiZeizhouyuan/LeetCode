/*************************************************************************
	> File Name: 268.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月03日 星期四 20时40分26秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
 
int missingNumber(int* nums, int numsSize){
    int *mark = (int *)calloc(numsSize + 5, sizeof(int));
    for (int i = 0; i < numsSize; i++){
        mark[nums[i]] = 1;
            
    }
    for (int i = 0; ; i++) {
        if(mark[i] == 0) return i;
            
    }
}

int nums[10000], ans = 0;
int main() {
    for (int i = 0; ; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] == -1) break;
        ans++;
    }

    printf("%d\n", missingNumber(nums, ans));
    return 0;
}
