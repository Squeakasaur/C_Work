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
