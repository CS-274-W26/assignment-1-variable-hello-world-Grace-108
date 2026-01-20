#include <stdio.h> // Necessary for printf()

#include <time.h> // Necessary to seed random number generator

#include <stdlib.h>


int main() {
	srand(time(NULL)); // Seeds random number generator

    int myrand = rand()%11; // Generates random values 0-10

    if (myrand < 5){ // Prints for values 0-4
        printf("Eat more beef, kick less cats.\n");
    }
    else if (myrand < 10){ // Prints for values 5-9
        printf("FRODO LIVES\n");
    }
    else { // Prints for value 10
        printf("Larn is the best roguelike.\n");
    }

    printf("The random number was: %d\n", myrand); // Prints random number

    // The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
}
