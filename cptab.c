#include<stdio.h>

float *cptab(float *tab,int size){

	float *ptr=malloc(sizeof(float)*size);
	int i;
	for(i=0;i<size;i++)
	{
		ptr[i]=tab[i];
	}
	return ptr;
}

int main()
{

return 0;
}
