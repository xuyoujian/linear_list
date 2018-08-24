#include<stdio.h>
#include"list.h"
#include<stdlib.h>
#include<time.h>
int main(int argc,char *argv[])
{
	srand(time(0));
	SqList *L = NULL;
//	SqList **L_temp = NULL;
	int num = 0;
	int ret = 0;
	int i = 0;
	int reference = 0;
	InitList(&L);
	for(i =1 ; i<= 100 ; i++)
	{
		num = rand() % 100;
		ret = ListInsert(&L,i,num);
	}
	DispList(&L); 
	if(1 == ret)
	{
		printf("success\n");
	}
	else
	{
		printf("error\n");
	}
#if 0
	for(i = 100;i>= 1; i--)
	{
		ret = ListDelete(&L,i,&num);
		DispList(&L);
		printf("delete number:%d\n",num);
		printf("\n");
	}
#endif

#if 0
	for(i = 20; i>=1 ; i--)
	{
		ret = ListDelete(&L,rand()%100,&num);
		DispList(&L);
		printf("delete number:%d\n",num);
		printf("\n");

	}
#endif

#if 0
	for(i = 20; i>=1 ; i--)
	{
		reference = rand()%100;
		ret = GetElem(&L,reference,&num);
		DispList(&L);
		printf("the reference :%d,Get number:%d\n",reference,num);
		printf("\n");

	}
#endif
#if 0
	for(i = 20; i>=1 ; i--)
	{
		reference = rand()%100;
		ret = LocateElem(&L,reference);
		DispList(&L);
		printf("the reference :%d,Get locate:%d\n",reference,ret);
		printf("\n");

	}
#endif


#if 0
	ret = ListEmpty(&L);
	DispList(&L);
#endif
	

	DestroyList(&L);
	return 0;
}
