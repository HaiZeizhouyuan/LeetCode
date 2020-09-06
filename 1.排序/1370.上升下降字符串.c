/*************************************************************************
	> File Name: 1370.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月06日 星期日 14时43分42秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>

char * sortString(char * s){
    int s_len = strlen(s);
    int *mark = (int *)calloc(26, sizeof(int));
    for (int i = 0; i < s_len; i++) mark[s[i] - 'a'] += 1;
    for (int i = 0; i < s_len;) {
        for (int j = 0; j < 26 && i < s_len; j++) {
            if (mark[j] > 0) {
                s[i++] = j + 'a';
                mark[j] -= 1;
            }
        }
        for (int j = 25; j >= 0 && i < s_len; j--) {
            if (mark[j] > 0) {
                s[i++] = j + 'a';
                mark[j] -= 1;
            }
        }
    }
    return s;
}


int main() {
    char s[100];
    scanf("%s", s);
    printf("%s\n", sortString(s));
    return 0;
}
