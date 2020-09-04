/*************************************************************************
	> File Name: 1009.十进制整数的反码.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月03日 星期四 20时15分59秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
 
int main() {
    int bitwiseComplement(int N){
        if (N == 0) return 1;
        int tmp = N;
        while (tmp& tmp - 1) {
            tmp &= tmp - 1;               
        }
        return ((tmp - 1) << 1 | 1) - N;
    }
    return 0;
}
