//Program written by Iwap Saputra Batan (s1014043) and Ruben van Baaren (s1030556)
#include<stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
	FILE *input_file = fopen(argv[1], "r");
	
	if(input_file == NULL)
	{
		printf("File not found!");
		return 0;
	}

	int c;
	int lines = 0;
	int char_in_line = 0;
	int a_count = 0;
	int c_count = 0;
	int g_count = 0;
	int t_count = 0; 
	
	for(;;)
	{
		c = fgetc(input_file);
		if(c == EOF)
		{
			break;
		}
		if(lines > 500)
		{
			printf("1, Too many lines\n");
			exit(0);
		}
		if(char_in_line > 100)
		{
			printf("1, Too many characters on line\n");
			exit(0);
		}
		switch(c)
		{
			case 'A':
				a_count++;
				char_in_line++;
				break;
			case 'C':
				c_count++;
				char_in_line++;
				break;
			case 'G':
				g_count++;
				char_in_line++;
				break;
			case 'T':
				t_count++;
				char_in_line++;
				break;
			case '\n':
				lines++;
				if(lines > 500)
				{
					printf("1, Too many lines\n");
					exit(0);
				}
				if(char_in_line != 100)
				{
					printf("1, Line length incorrect");
					exit(0);
				}
				char_in_line = 0;
				break;
			default:
				printf("1, Unrecognized character: ");
				printf("%i\n", c);
				exit(0);
		}
	}
	printf("0, printing counts:\n");
	printf("Number of As: %i\n", a_count);
	printf("Number of Cs: %i\n", c_count);
	printf("Number of Gs: %i\n", g_count);
	printf("Number of Ts: %i\n", t_count);
}

