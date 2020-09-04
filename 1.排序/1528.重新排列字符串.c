/*************************************************************************
	> File Name: 1528.重新排列字符串.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月04日 星期五 16时24分25秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
 
int indices[100];
char s[100];
char * restoreString(char * s, int* indices, int indicesSize){
    char *str = (char *)malloc(sizeof(char) * indicesSize);
    for (int i = 0; i < indicesSize; i++) {
      //  printf("indices : %d, s[i] : %c\n", indices[i], s[i]);
        str[indices[i]] = s[i];
    }
    str[indicesSize] = '\0';
    return str;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &indices[i]);
    }
    getchar();
    for (int i = 0; i < n; i++) {
        scanf("%c", &s[i]);
        getchar();
    }
    printf("%s\n", restoreString(s, indices, n));
    return 0;
}
