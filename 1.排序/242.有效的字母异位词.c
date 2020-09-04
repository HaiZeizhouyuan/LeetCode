/*************************************************************************
	> File Name: 242.有效的字母异位词.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月04日 星期五 11时43分49秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<time.h>
 
#define swap(a, b) {\
    __typeof(a) __temp = (a);\
    (a) = (b), (b) = __temp;\
}

void sort(char *str){
    for (int i = 1; i < strlen(str); i++) {
        for (int j = i; j > 0 && (str[j] < str[j - 1]); j--) {
            swap(str[j], str[j - 1]);
        }
    }
}

bool isAnagram1(char * s, char * t){
    sort(s);
    sort(t);
 //   printf("%s\n", s);
   // printf("%s\n", t);
    if (strcmp(s, t) == 0)  return true;
    else return false;
}

bool isAnagram(char *s, char *t) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    if (len_s != len_t) return false;
    int str[26 + 5] = {0};
    for (int i = 0; i < len_s; i++) {
        str[s[i] - 'a'] += 1;
        str[t[i] - 'a'] -= 1;
    }
    for (int i = 0; i < 26; i++) {
        if (str[i] != 0) return false;
    }
    return true;
}

int main() {
    char s[100];
    char t[100];
    scanf("%s", s);
    scanf("%s", t);
    printf("%d\n",isAnagram(s, t));
    return 0;
}
