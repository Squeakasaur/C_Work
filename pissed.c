/* Ways to piss off matt*/

#include <stdio.h>


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
			printf("wait till about 11pm on Sunday and start panicing about homework. He will given and help you but then basically tell you, you suck.\n");
            break;

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
