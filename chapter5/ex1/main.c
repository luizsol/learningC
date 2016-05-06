/*
 * This program prints a description of a fish using structures
 * Source: Head First C Book
 * Chapter 5, page 223
 * Author: Luiz Sol
 * Date: 2016/05/05
 */
 
 #include <stdio.h>

struct fish {
	const char *name;
	const char *species;
	int teeth;
	int age;
};

void catalog(struct fish f){
	printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

int main()
{
	struct fish snappy = {"Snappy", "Piranha", 69, 4};
	catalog(snappy);
	/* We're skipping calling label for now */
	return 0;
}
