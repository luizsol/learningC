/*
 * Choosing the correct main function to run the find_track function
 * Source: Head First C Book
 * Chapter 2.5, page 91
 * Author: Luiz Sol
 * Date: 2016/03/14
 */

/////////// Option 1 ///////////

int main(){
 	char search_for[80]; 
 	printf("Search for: "); 
 	fgets(search_for, 80, stdin); 
 	find_track(); //Error, no argument being passed to the find_track function
	return 0;
}

/////////// Option 2 ///////////

int main(){
 	char search_for[80]; 
 	printf("Search for: "); 
 	fgets(search_for, 79, stdin); //The coder is not using the full lenght of the array. The subtraction of 1 is not needed in this case
 	find_track(search_for); 
 	return 0;
} 

/////////// Option 3 ///////////

int main(){
	char search_for[80]; 
	printf("Search for: "); 
	fgets(search_for, 80, stdin); 
	find_track(search_for); 
	return 0; //This one would work
}

/////////// Option 4 ///////////

int main(){
	char search_for[80]; 
	printf("Search for: "); 
	scanf(search_for, 80, stdin);  //On the scanf the subtraction of 1 is needed
	find_track(search_for); 
	return 0;
}