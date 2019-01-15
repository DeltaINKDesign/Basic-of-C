#include<stdio.h>

void revw(char *text){

	int i,j;
	char tmp;
	for(i=0;text[i]!=0;i++)
	{
		while(text[i]==' ' || text[i]=='	')
		{
			i++;
			j=i;

		}
			
	}
	i--;
	for(j,i;i>j;j++,i--)
	{
		tmp=*(text+i);
		*(text+i)=*(text+j);
		*(text+j)=tmp;

	}


}
int main()
{
	char tab[]="kutas ku		 tas";
	revw(tab);
	printf("%s\n",tab);

return 0;
}
