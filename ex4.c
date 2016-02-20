#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>

int value[] = {2, 10, 12};
int *pointer = value;

void printpoint() {
	printf("Value: %d\n", value[0]);
	printf("Value add: %p\n", &value);
	printf("Value add: %p\n", pointer);
	printf("Value 3: %d\n", value[2]);
	printf("Value 3: %d\n", value[2]);
	printf("Pointer: %d\n", *pointer);
	printf("Pointer to 2nd: %d\n", *(pointer+2));
	printf("--------\n");
}

int main(int argc, char *argv[]) {

	printpoint();
	int i = 0;
	for(value[i]; value[i] != 12; i++) {
		printf("Pointer in MAIN: %d.\n", *pointer);
	}
	
	printf("New Pointer after main: %d\n", *pointer);
	printpoint();

	return 0;
}