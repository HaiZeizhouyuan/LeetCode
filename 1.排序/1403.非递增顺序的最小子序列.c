/*************************************************************************
	> File Name: 1403.非递增顺序的最小子序列.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月05日 星期六 14时18分36秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

#define swap(a, b){\
    __typeof(a) __tmp = (a);\
    (a) = (b), (b) = __tmp;\
}

int sum[105] = {0};
int nums[105];
void  prefix(int *nums, int numsSize) {
    for (int i = 1; i <= numsSize; i++) {
        sum[i] += sum[i - 1] + nums[i - 1];
    }
}

void sort_insert(int *data, int dataSize) {
    for (int i = 1; i < dataSize; i++) {
        for (int j = i; j > 0 && (data[j] > data[j - 1]); j++) {
            swap(data[j], data[j - 1]);
        }
    }
}

int* minSubsequence(int* nums, int numsSize, int* returnSize){
    (*returnSize) = 0;
    prefix(nums, numsSize);
    int st = 0, en = 0, len = 0, min_len = 500, max_sum = 0;
    int tmp_st = 0, tmp_en = 0;
    int all_sum = sum[numsSize];
    int *data = (int *)malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j <= numsSize; j++) {
            int re = sum[j] - sum[i];
            if (re > (all_sum - re)) {
                len = j - i;
                if (len > min_len) continue;
                tmp_st = i;
                tmp_en = j - 1;
                if (len < min_len) {
                    min_len = len;
                    st = tmp_st;
                    en = tmp_en;
                } else if (len == min_len && re > max_sum){
                    st = tmp_st;
                    en = tmp_en;
                } 
            }
        }
    }
    for (int i = st; i <= en; i++) {
        data[(*returnSize)++] = nums[i];
    }
    sort_insert(data, *returnSize);
    return data;
}


int main() {
    int n;
    int returnSize;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int *data = minSubsequence(nums, n, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        i && printf(" ");
        printf("%d", data[i]);
    }
    printf("\n");
    return 0;
}
