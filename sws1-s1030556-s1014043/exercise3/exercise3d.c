//Program written by Iwap Saputra Batan (s1014043) and Ruben van Baaren (s1030556)
#include<stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
	FILE *input_file = fopen("/dev/urandom", "r");
	FILE *output_file = fopen("exercise3d.txt", "a");
	
	if(input_file == NULL)
	{
		printf("File not found!");
		return 0;
	}
	
	char c, d;
	int lines = 0;
	for(;;)
	{
		c = fgetc(input_file);
		d = fgetc(input_file);

		u_int16_t value = (c << 8) | d ;
		printf("%04x\n", value);
		lines++;

		if(value == 42)
		{
			fprintf(output_file, "%d\n", lines);
			exit(0);
		}
	}
}
