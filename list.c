#include"list.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void InitList(SqList **L)
{
	*L = (SqList *)malloc(sizeof(SqList));

	if(*L != NULL)
	{
		printf("malloc success\n");
	}
	memset(&(*L)->data,0,sizeof(int)*MAXSIZE);
	memset(&(*L)->length,0,sizeof(int));
}

void DestroyList(SqList **L)
{
	free((*L));
}

int ListEmpty(SqList **L)
{
	memset(&(*L)->data,0,sizeof(SqList));
	(*L)->length = 0;
	return 1;
}

void DispList(SqList **L)
{
	SqList *l = *L;
	int i = 0;
	for(i = 0; i< l->length ; i++)
	  printf("%3d ",l->data[i]);
	printf("\n");
}

int GetElem(SqList **L , int i , int * e)
{
	SqList *l = *L;
	if( i <= l->length)
	{
	  *e = l->data[i-1];
	}
	else
	{
	return -1;
	}
}

int LocateElem(SqList **L , int e)
{
	SqList *l = *L;
	int i = 0;
	for(i = 0; i< l -> length ; i++)
	{
		if(e == l->data[i])
			return i + 1;
	}
	return -1;
}

int ListInsert(SqList **L , int i , int e)
{
	SqList *l = *L;
	int j = 0;
	int num = l->length;
	printf("l->length: %d\n",num);


	if((*L)->length > MAXSIZE)
	{
		return -1;
	}
	for(j = (*L)->length ; j> i-1; j++)
	{
		(*L)->data[ j ] = (*L)->data[ j- 1 ];
	}
	(*L)->data[ j ] = e;
	(*L)->length ++;
	
	return 1;
}

int ListDelete(SqList **L, int i, int *e)
{
	//SqList *l = *L;
	int j = 0;
	int num = 0;
	if((*L) -> length < 0)
	{
		return -1;
	}
	num = (*L)->data[i-1];
	(*L)->data[i-1] = 0;
	for(j = i -1 ; j < (*L)->length ; j ++)
	{
		(*L)->data [j] = (*L)->data[j + 1];
	}	
	(*L)->length --;
	*e = num;
	return 1;
}


