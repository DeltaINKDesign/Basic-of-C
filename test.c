#include<stdlib.h>
#include<stdio.h>

void selecton(float *s,int size)
{
	int i;
	for(i=1;i<=s+size;i++)
	{
		int j;
		for(j=0;j<=s+size;j++)
		{
			float tmp;
			if(*(s+i)<=*(s+j))
			{
				tmp=*(s+i);
				*(s+i)=*(s+j);
				*(s+j)=tmp;
			}
		}
	}
}
int main()
{
	float tab[10]={3.2,10.1,7.5,2.3,64.8,2.2,1.1,6.7,9.6,5};
	int size;
	selecton(tab);
	int i;
	for(i=0;i<=9;i++)
	{
		printf("Index %i = %f \n",i,tab[i]);
	}
return 0;
}
