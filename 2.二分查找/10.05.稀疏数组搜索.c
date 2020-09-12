/*************************************************************************
	> File Name: 10.05.稀疏数组搜索.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月12日 星期六 15时05分15秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
 
int findString(char** words, int wordsSize, char* s){
    int l = 0, r = wordsSize - 1, mid;
    while(l <= r) {
        mid = (l + r) >> 1;
        while (words[mid] == "") mid += 1;
        if (words[mid] == s) return mid;
        if (words[mid] < s) l = mid + 1;
        else r = mid - 1;
    }
    return -1;

}

int main() {
    char *str[100];
    int size = 0;
    for (int i = 0; ; i++) {
        scanf("%s", str[i]);
        if (str[i] == "&") break;
        size += 1;
    }
    char s[100];
    scanf("%s", s);
    findString(str, size, s);
    return 0;
}
