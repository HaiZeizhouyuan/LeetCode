/*************************************************************************
	> File Name: 01.03.URL化.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月27日 星期日 21时17分12秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>

char* replaceSpaces(char* S, int length){
    char *str = (char *)malloc(sizeof(char) * (3 * length + 1));
    int ans = 0;
    for (int i = 0; i < length; i++) {
        if (S[i] == ' ') {
            str[ans++] = '%';
            str[ans++] = '2';
            str[ans++] = '0';        
        } else {
                str[ans++] = S[i];                
        }        
    }
    str[ans] = '\0';
    return str;
}


int main() {
    int n;
    char str[100];
    scanf("%[^\n]s", str);
    getchar();
    scanf("%d", &n);
    char *s = (char *)malloc(sizeof(char) * n);
    s = replaceSpaces(str, n);
    printf("%s\n", s);
    return 0;
}
