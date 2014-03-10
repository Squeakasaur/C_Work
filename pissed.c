/* Ways to piss off matt*/

#include <stdio.h>
#include <stdlib.h>

char read_char(char *);
int main(void)
{
	char f;

	while(1)
	{

		f=read_char("Are you using vi?");
		if(tolower(f)=='y')
		{
			printf("scroll using the down arrow. Do not use :line#\n");
			break;
		}

		else if(tolower(f)=='n')
		{	printf("wait till about 11pm on Sunday and start panicking about homework. He will give in and help you but then basically tell you, you suck.\n");
			break;
		}

		else if(tolower(f)=='e')
		{
			exit(0);
		}
	}

}

char read_char (char * message)
{
	char ch;
	printf("%s ", message);
	scanf("%c", &ch);

	while(fgetc(stdin)!='\n')
	{}
	return ch;
}
