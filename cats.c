/* Kitty cats */

#include <stdio.h>
#include <string.h>

struct cat{

	char name[12];
	int age;
	int num_toes;
	int num_legs;
	char is_evil;
	char is_sleeping;
};

//MELISSA: This is a group of variables that is defined by cat. It says that cat has a name, toes, legs, may or may not be evil, and may or may not be sleeping.
typedef struct cat CAT;

int main(void)
{
/*	CAT mycat;
	mycat.age=2;
	mycat.num_toes=10;
	strcpy(mycat.name,"Rumble");


	printf("Name:%s\nAge:%d\nToes:%d\n",mycat.name,mycat.age,mycat.num_toes);			 
*/

	CAT my_cats[3];

	strcpy(my_cats[0].name,"Mr. Fluffington Evilbum");
	strcpy(my_cats[1].name,"Floof");
	strcpy(my_cats[2].name,"Cat");

	my_cats[0].age=2;
	my_cats[1].age=4;
	my_cats[2].age=6;

	my_cats[0].num_toes=10;
	my_cats[1].num_toes=12;
	my_cats[2].num_toes=10;

	my_cats[0].num_legs=3;
	my_cats[1].num_legs=4;
	my_cats[2].num_legs=4;

	my_cats[0].is_evil='y';
	my_cats[1].is_evil='n';
	my_cats[2].is_evil='n';

	my_cats[0].is_sleeping='n';
	my_cats[1].is_sleeping='y';
	my_cats[2].is_sleeping='y';

	int i;
	for( i=0;i<3;i++){

		printf("Name:%s\nAge:%d\nToes:%d\nLegs:%d\nAre they evil?%c\nAre they sleeping?%c\n",my_cats[i].name,my_cats[i].age,my_cats[i].num_toes,my_cats[i].num_legs,my_cats[i].is_evil,my_cats[i].is_sleeping);

		 
	}

	//use a loop to print out all of the cats	


	return(0);
}

