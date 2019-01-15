#include<stdio.h>
#include<stdlib.h>

void last_char(char *text)
{
	int i;
	char *s;
	for(i=0;text[i]!=0;i++);
	i--;
	s=text+i;
	for(i,i>=0;i--)
	{
		text[i]=*s;
	}


}

int main()
{



return 0;
}
