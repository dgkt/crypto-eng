#include <stdio.h>

void addvector(int *r, const int *a, const int *b, unsigned int len)
{
	unsigned int i;
	for(i=0;i<len;i++)
	{
		*(r + i) = *(a + i) + *(b + i); 
	}
}

int main ()
{
	int a[] = { 1, 2, 3, 4, 5, 6 };
	int b[] = { 7, 8, 9, 10, 11, 12 };
	int r[6] = {0, 0, 0, 0, 0, 0};
	addvector(r, a, b, 6);
	for(int index = 0; index<6; index++)
	{
		printf("%d ", r[index]);
	}

    return 0;

}



