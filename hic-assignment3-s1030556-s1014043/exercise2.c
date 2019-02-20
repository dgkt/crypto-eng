#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
	char* p;
	static size_t i;
	size_t max_size = (size_t)-1;
	for(i = 1; ;i++)
	{
		p = malloc(i);
		if(!p)
		{
			break;
		}
	printf("One malloc can allocate at most %ld bytes\n", i);
	}
	
}


