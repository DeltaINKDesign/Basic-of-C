#include<stdio.h>

char *second_word( char *text)
{
	int i;
	char *ptr;
	for(i=0;text[i]!=' ' && text[i]!='	';i++);
	while(text[i]==' ' || text[i]=='	')
	{
		i++;
	}
	ptr=text+i;
	


return ptr;
}

int main()
{
	char tab[]="Dupa 	Kutas";
	printf("%s\n",tab);
	printf("%s\n",second_word(tab));
return 0;
}
