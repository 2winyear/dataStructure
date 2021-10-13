#include "arraylist.h"

ArrayList* createArrayList(int maxElementCount)
{
	ArrayList *p;

	p = (ArrayList *)malloc(sizeof(ArrayList));
	p->maxElementCount = maxElementCount;
	p->currentElementCount = 0;
	p->pElement = (ArrayListNode*)malloc(sizeof(ArrayListNode) * maxElementCount);
	return (p);
}

void deleteArrayList(ArrayList* pList)
{
	
}

int main(void)
{
	createArrayList(5);
}