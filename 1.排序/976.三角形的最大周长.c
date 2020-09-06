/*************************************************************************
	> File Name: 976.三角形的最大周长.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月06日 星期日 21时33分01秒
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
void quick_sort(int *num, int l, int r) {
    while (l < r) {
        int x = l, y = r, z = num[(l + r) >> 1];
        do {
            while (x <= y && num[x] > z) x++;
            while (x <= y && num[y] < z) y--;
            if (x <= y) {
                swap(num[x], num[y]);
                x++, y--;                         
            }               
        } while(x <= y);
            quick_sort(num, x, r);
            r = y;          
    }
    return ;

}


int largestPerimeter(int* A, int ASize){
    int len;
    quick_sort(A, 0, ASize - 1);
    for (int i = 0; i < ASize - 2; i++) {
        if (A[i] < A[i + 1] + A[i + 2]) {
            return A[i] + A[i + 1] + A[i + 2]; 
                    
        }
            
    }
    return 0;

}


int main() {
 
    return 0;
}
