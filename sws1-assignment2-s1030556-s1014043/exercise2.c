#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main () {
	int test_int = 0;
	bool test_bool;

	printf ("Size of bool is : %ld byte\n",sizeof(bool));
	
	test_bool = true;
	memcpy (&test_int, &test_bool, sizeof(bool));
	printf ("True value is: 0x%x\n", test_int);

	test_bool = false;
	memcpy (&test_int, &test_bool, sizeof(bool));
	printf ("False value is: 0x%x\n", test_int);
}
