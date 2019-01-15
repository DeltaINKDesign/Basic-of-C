#include<stdio.h>

double *cpvar(double v){

	double *ptr=malloc(sizeof(double));
	*ptr=v;
	return ptr;
}

int main()
{

return 0;
}
