#include <stdio.h>

int main(void) {

	int i = 3;
	int j = 5;
	
	if (i < j) {
		printf("i is less than j.\n");
		printf("would this be printed?\n");
	} else
		printf("i is larger than j.\n");

	return 0;

}
