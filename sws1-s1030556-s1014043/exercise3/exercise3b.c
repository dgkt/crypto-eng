//Program written by Iwap Saputra Batan (s1014043) and Ruben van Baaren (s1030556)
#include<stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
	FILE *input_file = fopen("/dev/urandom", "r");
	
	if(input_file == NULL)
	{
		printf("File not found!");
		return 0;
	}
	
	char c;
	for(;;)
	{
		c = fgetc(input_file);
		printf("%d %u %x\n",c,c,c & 0xFF);

		if(c == 42)
		{
			exit(0);
		}
	}
}
