/*************************************************************************
	> File Name: 面试题.02.02返回.返回倒数第k个节点.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月10日 星期六 10时40分23秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
 
nt kthToLast(struct ListNode* head, int k){
        struct ListNode *p = head;
    while(k--){
                p = p->next;
            
    }
    while(p) {
                p = p->next;
                head = head->next;
            
    }
        return head->val;

}
