#include <stdio.h>
extern void magic_function();

char* p1;
char* p2;
int main (void)
{
	char c;
	p1 = &c;
	p2 = &c;
	magic_function();
	int stackusage = (int)(p1-p2);
	printf("%p\n", p1);
	printf("%p\n", p2);
	printf("Magic function used %d bytes!\n", stackusage);
}
