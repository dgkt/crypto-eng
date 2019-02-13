#include <stdio.h>


void addvector(int *r, const int *a, const int *b, unsigned int len)
{
	unsigned int i;
	for(i=0;i<len;i++)
	{
		*(r + i) = *(a + i) + *(b + i); 
	}
}

int memcmp1(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1 = s1;
	const unsigned char *p2 = s2;

	for(size_t index = 0; index<n; index++, p1++, p2++)
	{
		if(*p1 < *p2)
		{
			return -1;
		}
		else if (*p1 > *p2)
		{
			return 1;
		}
	}
	return 0; 
}

int memcmp_backwards(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1 = s1 + n - 1;
	const unsigned char *p2 = s2 + n -1;

	for(; n>0; n--, p1--, p2--)
	{
		if(*p1 < *p2)
		{
			return -1;
		}
		else if (*p1 > *p2)
		{
			return 1;
		}
	}
	return 0; 
}

int main ()
{
    return 0;
}



