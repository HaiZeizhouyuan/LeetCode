/*************************************************************************
	> File Name: 1502.判断是否形成等差数列.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月04日 星期五 21时24分24秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>

#define swap(a, b){\
    __typeof(a) __temp = (a);\
    (a) = (b), (b) = __temp;\
}

void sort(int *data, int dataSize) {
    for (int i = 1; i < dataSize; i++) {
        for (int j = i; j > 0 && (data[j] < data[j - 1]); j--) {
            swap(data[j], data[j - 1]);
        }
    }
}


bool canMakeArithmeticProgression(int* arr, int arrSize){
    sort(arr, arrSize);
   
    int temp = arr[1] - arr[0];
    for (int i = 0; i < arrSize - 1; i++) {
        if (arr[i + 1] - arr[i] != temp) return false;

    }

    return true;
}


int main() {
    int n;
    int num[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
   
    printf("%s\n", canMakeArithmeticProgression(num, n) ? "true" : "false");
    return 0;
}
