/* Love Scale, opposite of hatescale for Cory <3 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	char read_char(char *); 
	char c;
	

		c=read_char("Is his name cory?");
		{
			if(tolower(c)=='y'){
			printf("So much love it hurts\n");
				exit(0);
				}

			else if(tolower(c)=='n')
			{
				printf("who the hell are you?this is Cory's love scale >.>\n");
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


