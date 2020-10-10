/*************************************************************************
	> File Name: 52.两个链表的第一个公共节点.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月10日 星期六 14时55分38秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
 
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA, *q = headB;
    if (!p|| !q) return NULL;
    while(p != q){
       p = p ? p->next : headB;
       q = q ? q->next : headA;
    }
    return p;
}
