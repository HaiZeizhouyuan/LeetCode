/*************************************************************************
	> File Name: 1122.数组的相对排序.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月05日 星期六 19时02分19秒
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

int arr1[1005], arr2[1005];

void sort_insert(int *data, int dataSize) {
    for (int i = 1; i < dataSize; i++) {
        for (int j = i + 1; j > 0 && (data[j] < data[j - 1]); j--) {
            swap(data[j], data[j - 1]);
        }
    }
}

int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize){
    (*returnSize) = 0;
    int *data = (int *)malloc(sizeof(int) * arr1Size);
    int *tmpf = (int *)calloc(arr1Size, sizeof(int));
    int *tmpb = (int *)malloc(sizeof(int) * arr1Size);
    
    for (int i = 0; i < arr1Size; i++) {
        tmpf[arr1[i]] += 1;
    }
    for (int i = 0; i < arr2Size; i++) {
        for (int j = 0; j < tmpf[arr2[i]]; j++) {
            data[(*returnSize)++] = arr2[i];
        }
        tmpf[arr2[i]] = 0;
    }
    for (int i = 0; i < n; i++) {
        
    }
    
    return data;
}



int main() {
    int n, m, returnSize;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    int *data = relativeSortArray(arr1, n, arr2, m, &returnSize);
    printf("returnSize : %d\n", returnSize);
    for (int i = 0; i < returnSize; i++) {
        i && printf(" ");
        printf("%d", data[i]);
    }
    printf("\n");
    return 0;
}
