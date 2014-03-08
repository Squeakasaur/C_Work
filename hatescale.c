/* how  much does matt hate me right now */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char read_char(char *);
int main(void)
{
	char x;

	while(1)
	{

		x=read_char("Is it the weekend? ");
		if(tolower(x)=='y')
		{
			printf("He hates you alot\n"); 
			break;
		}     

		else if	(tolower(x)=='n')
		{
			while(1)
			{
				x=read_char("Is it early morning? ");
				if(tolower(x)=='y')
				{
					printf("He probably wants to kill you\n");
					exit(0);
				}
				else if (tolower(x)=='n')
				{ 
					printf("Doesn't matter, he still hates you!\n");
					exit(0);
				} 
				else
				{
					printf("Please respond with Y or N\n");
				    break;
				}
			}
		}
		else if(tolower(x)=='q')
		{
			exit(0);
		}
		else
		{
			printf("Please respond with Y or N\n");
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

