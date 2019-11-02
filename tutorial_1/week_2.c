/**********************************************************
 * Created by Christoph Berger on 02/11/16.
 * Updated on 22/10/17 & 26/10/2019
 * Just uncomment the parts of the exercise you want to compile
 * The following code should be viewed as an addition to the slides of the second tutorial.
 * The examples in this file are given to the author’s best knowledge and belief.
 * However, the author excludes all liability for the correctness,
 * completeness or quality of the information provided.
**********************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//minimal main function
/*
int main(int argc, char **argv){
    // argc is the number of arguments passed to the function/program (=ARGument Count)
    // argv is a vector/matrix containing the arguments (=ARGument Vector)
    return 0; //every function with a return type (here: int) must return a value
    // a convention is to use 0 to signal successful execution and any other number usually represents some kind of error
}
*/


//Small Data type example
/*
int main(int argc, char **argv){
    int number = 4; //this is an integer
    char letter = 'c'; //chars are individual characters from the ASCII table..
    char a = 98; //..and thus are just integers as well which are interpreted as the relevant char
    float pi = 3.1415; //float is the standard floating point number with 32 bit
    double pi_acc = 3.1415926536; //and double is a float with double the size, thus more accuracy (64 bit)
    printf("Number: %d, Letter: %d, a: %d and %c, pi is: %.2f or %f\n", number, letter, a, a, pi, pi_acc);
    //you print variables by adding the correct format specifier (e.g. %f) to your string and adding the relevant
    //variable separated by a comma after the text. Note that this does not check for mismatches, so in C you could
    // print an integer as float (%f) and the number would simply be interpreted as float, not as int as intended
    return 0;
}
*/
//PART 1
/*
int main(){
    // Always initialise your variables
    int random = 0;
    // This line initialises your random number generator
    srand(time(NULL));
    random = rand () % 42;
    printf("Pseudo-random number is %d\n", random);
    return 0;
}
*/

//PART 2
/*
int main(){
    // Always initialise your variables
    int random = 0;
    int counter = 100;
    // This line initialises your random number generator with the current time
    srand(time(NULL));
    while (counter > 0){
        --counter;
        random = rand () % 42;
        printf("Number is %d\n", random);
    }
    return 0;
}
*/

//PART 3
/*
int main(){
    // Always initialise your variables
    int random = 0;
    int counter = 100;
    // This line initialises your random number generator
    srand(time(NULL));
    while (counter > 0){
        --counter;
        random = rand () % 42;
        if (random >= 21)
            printf("Higher\n");
        else
            printf("Lower\n");
    }
    return 0;
 }

*/

//PART 4
/*
int main(){
    // Always initialise your variables
    int random = 0;
    int counter = 100;
    int count_larger = 0;

    // This line initialises your random number generator
    srand(time(NULL));
    while (counter > 0){
        --counter;
        random = rand () % 42;
        if (random >= 21)
            ++count_larger;
    }
    printf("%d numbers are greater than or equal to 21\n",
            count_larger);
    return 0;
}
*/
//WHILE - What does this function do?
/*
int main(int argc, char **argv){
    //Exercise 1.4
    int count = 1;
    while (count <= 100){
        printf("Number is %d\n", count++);
    }
    return 0;
}
*/