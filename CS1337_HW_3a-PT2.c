/*
By Nick Garrett
CS 1337
Envirement used: text editor,
OS: Ubuntu
Compiler flags:
	no flags	
Description:
	Given an integer n provided by the user, the Iteration_of_doom function will print a particular set of characters.  In an ordered sequence.
	
*/

//libraries
#include <stdio.h>
#include <stdlib.h>

//variables
int iterations;
int dash;
int asterisk = 0;

/*
this function takes an input of the number of iterations to run, and recurively acts to determine the proper numbers to print the pattern.

the "really good function name" is Iteration_of_doom.
*/

void Iteration_of_doom(int iterations){

	//variables for the number of times to print the different characters
	dash = iterations-1;
	asterisk +=1;

	//for loops to print the different characters	
	for(int i = 0; i<dash; i++){	
		printf("-");
	}

	for(int i = 0; i<asterisk; i++){	
		printf("*");
	}

	printf("\n");

	//recursion function, does not call itself when it finnishes its last iteration	
	if(iterations >1){
		Iteration_of_doom(iterations-1);
	}
}



//main function
int main(int argc, char *argv[]){
	
	//if a number is provided in the execution, use it, otherwise, ask the user for one
	if(argc == 1){
		printf("You didn't include a number when executing this program, \nPlease enter a number.\n");
		scanf("%d",&iterations); 	
	}
	else if(argc == 2){
		//convert the *char (string) from the terminal execution to integer 
		iterations = atoi(argv[1]);
	}

	
	//call the function
	Iteration_of_doom(iterations);


}

