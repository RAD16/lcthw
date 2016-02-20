#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>

int llong; 
void print_letters(int length, char arg[]);

void print_arguments(int argc, char *argv[]) {

	int i = 0;
	for(i = 0; i < argc; i++) {
		int llong = strlen(argv[i]);
		printf("Number: %d == Value:'%s'\n", i, argv[i]);
		printf("Length: %d \n", llong);
		print_letters(llong, argv[i]);
	}

}

void print_letters(int length, char arg[]) {
	int i = 0;
	for(i = 0; i < length; i++) {
		char ch = arg[i];
		if(isalpha(ch) || isblank(ch)) {
			printf("'%c' == %d ", ch, ch);
		}
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	print_arguments(argc, argv);
	return 0;
}