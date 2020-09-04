/*************************************************************************
	> File Name: 867.转置矩阵.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月03日 星期四 16时56分20秒
 ************************************************************************/

#include<stdio.h>

int A[1000][1000];

int **trandpose(int **A, int Asize, int *Aclosize, int *returnSize, int **returnColumnSizes) {    
    for (int i = 0; i < *Aclosize; i++) {
        for (int j = 0; j < Asize; j++) {
            returnColumnSizes[i][j] = A[j][i];
        }
        *returnSize = *Aclosize;
    }
    return returnColumnSizes;
}

int main () {
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    trandpose(A, n, &m, &returnSize, );
}

