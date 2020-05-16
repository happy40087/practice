#include <stdio.h>

int main(void) {
    unsigned long int n = 00000000000000000000000011111111;
	int number = 0;
	
	printf("%u ,%d \n",n,number);
	

	for(int i =0;n>0;i++){
		number += n & 1;
		n = n >> 1;
		printf("%u ,%d \n",n,number);
	}

	printf("%d",number);
	return 0;
}