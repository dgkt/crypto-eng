#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print_contents(void *pointer, int size)
{
	//Declaring the pointer as char allows to jump 1 byte at a time
	char *p = pointer;
	for(int len = 0; len<size; len++)
	{
		printf("%p\t\t",&p[len]);		//Print address
		printf("%d\t", ((char*)p)[len]);	//Print decimal value
		printf("\n");				
	} 
}

int main(void) {
	char *s1 = malloc(9);
	if (s1 == NULL) return 1;
	char *s2 = malloc(9);
	if (s2 == NULL) return 1;

		
	strcpy(s1, "s1014043");
	strcpy(s2, "s1030556");
	
	//Do your attack
	//char buffer[strlen(s1)];
	//memcpy(buffer, s1, strlen(s1));
	//s1 = buffer;
	//s1[strlen(s1)] ='%';
	//s1[strleng(s1)+1] = 's';

	//printf("%s%s",s2,s1);
	for(int i = 0; i < 50; i++)
	{	
		printf("%s", (char*) &s1[i]);
	}
	printf("\n");
		


	//print_contents(&s1[0], sizeof(s1));
	//print_contents(&s2[0], sizeof(s2));

	printf("student 1: %s\n", s1);
	printf("student 2: %s\n", s2);
	return 0;
}
