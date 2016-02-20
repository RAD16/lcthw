/* declare header files for necessary functions */
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/* define the structure called "Person" */
struct Person {
	/* declare the variables available in this struct */
	char *name;
	int age;
	int height;
	int weight;
	char *favorite_penis;
	int times_fucked;
};

/* create a structure function and declare its arguments */
struct Person *Person_create(char *name, int age, int height, int weight, char *favorite_penis, int times_fucked) {
	/* create a pointer to struct Person with size equal
	to the size of the struct Person */
	struct Person *who = malloc(sizeof(struct Person));
	/* affirm that the pointer passed to this function 
	does not point to a NULL character */
	assert(who != NULL);

	/* declare the values of the Person struct pointed 
	to by whatever *who pointer is passed through  */
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	who->favorite_penis = favorite_penis;
	who->times_fucked = times_fucked;
	
	/* return the new value of the created struct so other
	functions can use it */
	return who;
}

/* create a function to free the memory allocated to a created
struct */
void Person_destroy(struct Person *who) {
	/* make sure who pointer exists */
	assert(who != NULL);
	
	/* free up the memory allocated to struct vars */
	free(who->name);
	free(who);
}

/* initialize function to print struct values to stdout */
void Person_print(struct Person *who) {
	/* user pointers to call struct values */
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
	printf("\tFavorite Penis: %s\n", who->favorite_penis);
	printf("\tTimes Fucked: %d\n", who->times_fucked);
}

/* main function call */
int main(int argc, char *argv[]) {
	/* uses Person_create() function to write values 
	into a new Person struct pointed to by "dick" */
	struct Person *dick = Person_create(
		"Dick Daght", 20, 72, 180, "slim and tender", 3);

	struct Person *bitch = Person_create(
		"Bitch Kack", 32, 64, 140, "taught like tent stake", 29);
	
	printf("Dick is at memory location %p:\n", dick);
	printf("Dick is at memory location %p:\n", &dick);
	Person_print(dick);

	printf("Bitch is at memory location %p:\n", bitch);
	Person_print(bitch);

	/* increment variable values by given amts, then print
	the struct again with new values */
	dick->times_fucked -= 2;
	dick->age += 20;
	dick->height += 2;
	dick->weight += 40;
	Person_print(dick);

	bitch->times_fucked -= 24;
	bitch->age += 20;
	bitch->weight += 20;
	Person_print(bitch);

	/* free up memory allocated to the creation of the two
	structs */
	Person_destroy(dick);
	Person_destroy(bitch);

	/* return success */
	return 0;
}

