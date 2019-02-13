#include <stdio.h>

void print_contents(void *pointer, int size)
{
	//Declaring the pointer as char allows to jump 1 byte at a time
	char *p = pointer;
	for(int len = 0; len<size; len++)
	{
		printf("%p\t\t",&p[len]);		//Print address
		printf("%#02x\t", ((char*)p)[len]);	//Print hex value
		printf("%d\t", ((char*)p)[len]);	//Print decimal value
		printf("\n");				
	} 
}

int main (){
        short i = 0x1234;
        char x = -127;
        long sn1 = 1030556;
        long sn2 = 1014043;
        int y[2] = {0x11223344,0x44332211};

	//Here is the old code for 1c

	printf("Size of short: %ld bytes\n",sizeof(i));
    	printf("Size of char: %ld bytes\n",sizeof(x));
    	printf("Size of long sn1: %ld bytes\n",sizeof(sn1));
    	printf("Size of long sn2: %ld byte\n",sizeof(sn2));
	printf("Size of long int: %ld byte\n",sizeof(y));

	//Code for 1D
	printf("Adress\t\t content (hex)\t content (dec)\n");
	printf("------------------------------------------\n");
	print_contents(&i, sizeof(i));
	print_contents(&x, sizeof(x));
	print_contents(&sn1, sizeof(sn1));
	print_contents(&sn2, sizeof(sn2));
	print_contents(&y, sizeof(y));


    return 0;

}



