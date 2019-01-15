#include<stdio.h>

int palindrom(char *text)
{
	int i,j;
	for(i=0;text[i]!=0;i++);
	i--;
	for(j=0,i;i>j;i--,j++)
	{
		while(text[i]==' ')
		{
			i--;
		}
		while(text[j]==' ')
		{
			j++;
		}		
		if(text[i]!=text[j])
		{
			text[i]^=32;
			if(text[i]!=text[j])
			{
				return 0;
			}
		
		}
		
	}
	return 1;

}
int main()
{
	char tab[]="K oZ A k";
	printf("%s\n",tab);
	printf("%d\n",palindrom(tab));


return 0;
}
