#include "arraylist.h"

ArrayList* createArrayList(int maxElementCount)
{
	ArrayList *p;

	p = (ArrayList *)malloc(sizeof(ArrayList));
	
	
	p->currentElementCount++;
	p->pElement->data = 1;
	return (p);
}

void deleteArrayList(ArrayList* pList)
{

}

int main(void)
{
	createArrayList(5);
}