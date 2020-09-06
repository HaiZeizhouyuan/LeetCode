/*************************************************************************
	> File Name: 1030.距离顺序排列矩阵单元格.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月06日 星期日 20时03分04秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

void bubble_sort(int (*data)[1000], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (data[j + 1][3] < data[j][3]) swap(*data[i], );
        }
    }
}

int** allCellsDistOrder(int R, int C, int r0, int c0, int* returnSize, int** returnColumnSizes){
    int sum_node = R * C;
    int **data = (int **)calloc(sum_node, sizeof(int*));
    for (int i = 0; i < sum_node; i++) {
        int *data[i] = (int *)calloc(3, sizeof(int));
    }
    int ans = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            data[ans][0] = i;
            data[ans][1] = j;
            data[ans][2] = abs(i - r0) + abs(j - c0);
        }
    }
    bubble_sort(data, sum_node);
}


int main() {

    return 0;
}
