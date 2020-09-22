/*************************************************************************
	> File Name: 69.x的平方根.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月13日 星期日 19时17分18秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
 
int mySqrt(int x) {
    if (x < 1) return 0;
    if (x < 4) return 1;
    long long l = 0, r = x / 2, mid;
    while(l <= r) {
        mid = (l + r) >> 1;
        if (mid * mid <= x && x < (mid + 1) * (mid + 1)) return mid;
        if (mid * mid > x) r = mid - 1;
        else l = mid + 1;
    }
}

int main() {
    int n;
    while(~scanf("%d", &n)) {
       printf("%d\n",mySqrt(n));
    }
    return 0;
}
