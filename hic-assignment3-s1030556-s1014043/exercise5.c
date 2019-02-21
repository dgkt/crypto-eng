#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	char *s1 = malloc(9);
	if (s1 == NULL) return 1;
	char *s2 = malloc(9);
	if (s2 == NULL) return 1;

		
	strcpy(s1, "s1014043");
	strcpy(s2, "s1030556");
	
	//Do your attack
	for(int i = 0; i < 50; i++)
	{	
		if(s1[i] == '\0')
		{
			s1[i] = ' ';
		}
	}

	printf("student 1: %s\n", s1);
	printf("student 2: %s\n", s2);
	return 0;
}
