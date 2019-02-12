#include <stdio.h>

int main (void){
        short i = 0x1234;
        char x = -127;
        long sn1 = 1030556;
        long sn2 = 1014043;
        int y[2] = {0x11223344,0x44332211};

	printf("Size of short: %ld bytes\n",sizeof(i));
    	printf("Size of char: %ld bytes\n",sizeof(x));
    	printf("Size of long sn1: %ld bytes\n",sizeof(sn1));
    	printf("Size of long sn2: %ld byte\n",sizeof(sn2));
	printf("Size of long int: %ld byte\n",sizeof(y));


    return 0;

}

