ADT list
{
	数据对象：
		D = {a(i)|1<=i<=n,n>=0,a(i)为ElemType类型}
	数据关系：
		R = {<a(i),a(i+1)> | a(i),a(i+1)属于D，i = 1,...,n-1}
	基本运算：
	InitList(&L);
	DestroyList(&L);
	ListEmpty(L);
	ListLength(L);
	DispList(L);
	GetElem(L,i,&e);
	LocateElem(L,e);
	ListInsert(&L,i,e);
	ListDelete(&L,i,&e);
}
