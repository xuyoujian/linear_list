#ifndef _LIST_H_
#define _LIST_H_

#define MAXSIZE 100
typedef struct sqlist
{
	int data[MAXSIZE];
	int length;
}SqList;

void InitList(SqList **L);
void DestroyList(SqList **L);
int ListEmpty(SqList **L);
int ListLength(SqList **L);
void DispList(SqList **L);
int GetElem(SqList **L,int i,int *e);
int LocateElem(SqList **L,int e);
int ListInsert(SqList **L,int i,int e);
int ListDelete(SqList **L,int i,int *e);


#endif
