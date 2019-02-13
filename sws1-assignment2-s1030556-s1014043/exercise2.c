#include <stdbool.h>
#include <stdio.h>

int main (){
	bool test_bool;

	printf ("Size of bool is : %ld byte\n",sizeof(bool));
	
	test_bool = true;
	printf ("True value is: 0x%x\n", test_bool);

	test_bool = false;
	printf ("False value is: 0x%x\n", test_bool);

	char bigbool = 0x2;
	bool b = (bool) bigbool;

	if(b)
	{
		printf("%#02hhx as a boolean is true!\n", bigbool);
	}	
	else
	{
		printf("%#02hhx as a boolean is false!\n", bigbool);
	}
}
