/* declare header files for necessary functions */
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/* define the structure called "Person" */
struct Person {
	/* declare the variables available in this struct */
	char *name;
	char *favorite_penis;
	int times_fucked;
};

struct Person *func(char *name, char *favorite_penis, int times_fucked) {
	struct Person *foo = malloc(sizeof(struct Person));
	foo->name = name;
	foo->favorite_penis = favorite_penis;
	foo->times_fucked = times_fucked;

	printf("Name: %s\n", foo->name);
	printf("\tFavorite Penis: %s\n", foo->favorite_penis);
	printf("\tTimes Fucked: %d\n", foo->times_fucked);
	
	return foo;
}



/* main function call */
int main(int argc, char *argv[]) {
	struct Person *dick = func("Dickolas", "adorable", 8 );
	printf("%s, %s, %d\n", dick->name, dick->favorite_penis, dick->times_fucked);
	struct Person *alice = func("Mrs. Alice Wackit", "all", 200);
	printf("%s, %s, %d\n", alice->name, alice->favorite_penis, alice->times_fucked);
	/* free up memory allocated to the creation of the two
	structs */
	free(dick);
	free(alice);

	/* return success */
	return 0;
}

