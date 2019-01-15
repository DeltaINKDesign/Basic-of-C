#include<stdio.h>

void zerotab(int *tab, int size)
{
	while(size>=0)
	{
		size--;
		*(tab+size)=0;
		
	}
}
int main()
{
	int i;
	int tab[]={1,2,1,3,1,5,7,8,9,10};
	zerotab(tab,10);
	for(i=0;i<10;i++)
	{
		printf("%d ",tab[i]);
	}

return 0;	
}
