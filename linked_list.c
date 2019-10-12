#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**线性单链表存储结构*/
typedef struct Node{
    ElemType data;
    struct Node *next;
}Node;

typedef struct Node *LinkList;


/**单链表的读取*/
Status GetElem(LinkList L,int i,ElemType *e){
    int j;
    LinkList p;
    p= L->next;
    j=1;
    while(p&&j<i){
       p =  p->next;
      ++j;
    }
    if(!p||j>i)
        return ERROR;
    *e = p->data;
    return OK;
}

Status ListInsert(LinkList *L,int i,ElemType e){
    int j;
    LinkList p,s;
    p = *L;
    j=1;
    while(p&&j<i){ /***寻找第i个元素*/
        p=p->next;
        ++j;
    }
    if(!p||j>i)
        return ERROR;
    /***生成一个新的节点*/
    s=  (LinkList)malloc(sizeof(Node));
    s->data = e;
    s->next = s;
    p->next = s;
    return OK;
}


Status ListDelete(LinkList *L,int i;ElemType *e){
    int j;
    LinkList p,q;
    p = *L;
    j=1;
    while(p->next&&j<i){
        p=p->next；
        ++j;
    }
    if(!(p->next)||j>i)
        return ERROR;
    q = p->next;
    p->next = q->next;
    *e = q.data;
    free(q);
    return Ok;
}

void CreateListHead(LinkList *L,int n){
    LinkList p;
    int i;
    srand(time(0)); /**初始化随机数种子*/
    *L = (LinkList)malloc(sizeof(Node));
    *L->next = NULL;
    for(i=0;i<n;i++){
        p = (LinkList)malloc(sizeof(Node));/**生成新的结点*/
        p->data = rand()%100 + 1; /**生成随机数复制到新结点数据域*/
        p->next = (*L)->next;
        (*L)->next = p; /**插入到表头*/
    }

}



