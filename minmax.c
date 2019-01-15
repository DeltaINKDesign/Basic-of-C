#include<stdio.h>

void mx_tab(float tab[],int size,float *min,float *max)
{
	int i;*min=0;*max=0;
	for(i=0;i<size;i++)
	{
		if(*min<tab[i])		//*(tab+i)==tab[i]
		{
			*min=tab[i];
		}
		if(*max>tab[i])
		{
			*max=tab[i];
		}
	}

}
int main()
{
	float tab[]={1,2,3,4,5,7,-6};
	int i;float min,max;
	mx_tab(tab,7,&min,&max);
	printf("min= %f\n max=%f\n",min,max);
return 0;
}
