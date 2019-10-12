#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**���Ե�����洢�ṹ*/
typedef struct Node{
    ElemType data;
    struct Node *next;
}Node;

typedef struct Node *LinkList;


/**������Ķ�ȡ*/
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
    while(p&&j<i){ /***Ѱ�ҵ�i��Ԫ��*/
        p=p->next;
        ++j;
    }
    if(!p||j>i)
        return ERROR;
    /***����һ���µĽڵ�*/
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
        p=p->next��
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
    srand(time(0)); /**��ʼ�����������*/
    *L = (LinkList)malloc(sizeof(Node));
    *L->next = NULL;
    for(i=0;i<n;i++){
        p = (LinkList)malloc(sizeof(Node));/**�����µĽ��*/
        p->data = rand()%100 + 1; /**������������Ƶ��½��������*/
        p->next = (*L)->next;
        (*L)->next = p; /**���뵽��ͷ*/
    }

}



