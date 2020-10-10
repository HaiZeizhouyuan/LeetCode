/*************************************************************************
	> File Name: 405.数字转换为十六进制数.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月16日 星期三 15时56分53秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int arr[32] = {0}, num2[32] = {0}, ans;
void ten_to_two(int val) {
    if (val / 2 > 0) {
        ten_to_two(val / 2);
    }
    arr[ans++] = val % 2;
    return ;
}

void two_to_ten(int *num, int *sum, int loc) {
    if (loc == 32) {
        printf("sum : %d\n", *sum);
        return ;
    }
    *sum += num[31 - loc] * pow(2, loc);
    two_to_ten(num, sum, loc + 1);
}

char check(int str) {
    if (str < 10) return str - '0';
    return str - 10 + 'a';
}

char *toHex(int num){
    char *str = (char *)malloc(sizeof(char) * 32);
    char *str2  = (char *)malloc(sizeof(char) * 32);
    int cnt = 0;
    int tmp_str;
    ten_to_two(num);
    for (int i = 0; i < ans; i++) {
        num2[31 - i] = arr[ans - 1- i];
    }
    int *tmp = (int *)malloc(sizeof(int) * 32);
    for (int j = 0; j < ans;) {
        for (int i = 0; i < 4; i++) {
            tmp[i] = num2[31 - i];
        }
        for () {}
        for (int i = 0; i < 4; i++) {
            printf("%d", tmp[i]);
        }
        printf("\n");
        int sum = 0;
        two_to_ten(tmp, &sum, 0);
        printf("%d\n", sum);
        str[cnt++] = check(sum);
        printf("%c\n", str[cnt - 1]);
        j += 4;
    }
    free(tmp);
    for (int i = 0; i < cnt; i++) {
        str2[i] = str[cnt - 1 - i];
    }
    free(str);
    return str2;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", toHex(n));
    return 0;
}
