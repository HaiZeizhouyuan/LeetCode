/*************************************************************************
	> File Name: test.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月04日 星期五 16时53分45秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
 
int main() {
    int n;
    int num[50];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    int m;
    scanf("%d", &m);
    char str[50];
    for(int i = 0; i < m; i++) {
        scanf("%c", &str[i]);
    }
    for () {}
    return 0;
}
