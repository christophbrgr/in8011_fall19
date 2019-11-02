/*************************************************
 * Christoph Berger - Group 12
 * Created in Nov 2016
 * Updated on 2/11/17, 7/11/2018, 2/11/2019
 * Contains: Solutions to exercises of sheet 2 and additional examples

 * The following code should be viewed as an addition to the slides of the third tutorial.
 * The examples in this file are given to the author’s best knowledge and belief.
 * However, the author excludes all liability for the topicality,
 * correctness, completeness or quality of the information provided.
 */

#include <stdio.h>
#include <stdlib.h>

// FOR EXAMPLE
/*
 int main(){
    int i = 0;
    //For Loop
    for(i = 0; i < 5; i++){
        printf("Current value of i: %d\n", i);
    }
     printf("\nNow another way of looping: \n");
     //For loop
     i = 0; //resetting i to 0
     for (;;){
        printf("Current value of i: %d\n", i);
        i++;
        if(i == 5)
            break;
     }
     return 0;
 }
 */
// DO WHILE / WHILE EXAMPLE
/*
 int main(){
     int i = 10;

     do{
        printf("Run number %d\n", i);
        i++;
     }while(i < 10);


     printf("\nNow another loop:\n");
     //What's the difference?
     i = 10;
     while(i < 10){
        printf("Run number %d\n", i);
        i++;
     }
 }
*/

// fizzbuzz
/*
int main(int argc, char** argv){
    for(int i = 1; i <= 100; i++){
        if(!(i % 3) && !(i%5))
            printf("FizzBuzz\n");
        else if(!(i%3))
            printf("Fizz\n");
        else if(!(i%5))
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}
*/

// PROGRAM STRUCTURE
/*
 int main(int argc, char** argv){
    int k, m;
    unsigned short foo = 0;
    float x,y;
    for(k = 0; k < argc; k++){
        printf("Argument %d: %s\n", k, argv[k]);
    }
    //Do something
    return 0; //the return value is usually used to signal if any errors occured
 }
*/

// fgets() example
/* fgets() reads in at most one less than size characters from stream and stores them into the buffer pointed to by s.
 * Reading stops after an EOF or a newline. If a newline is read, it is stored into the buffer.
 * A terminating null byte (aq\0aq) is stored after the last character in the buffer.
 * */
/*
int main(int argc, char **argv){
    char mybuffer[100];
    fgets(mybuffer, 100, stdin);
    printf("The input was: %s \n", mybuffer);
    return 0;
}
*/

// Exercise 2.2.5 a
/*
 int main(int argc, char** argv){
    char mybuffer[100] = {0}; //initialize a char buffer with 0
    char unsafebuffer[100] = {0};
    int i = 0;
    printf("Eingabe:");
     //what's the difference between gets and fgets?
     //gets(unsafebuffer); //gets takes input from the user and stores it in mybuffer
     //fgets has protections for the max buffer length and where it gets its input from -> much better! Remember to strip the newline though!
     fgets(mybuffer, 9, stdin);
     //mybuffer[strcspn(mybuffer, "\n")] = 0;
     //mybuffer[99] = 0; //you should always set the last char to 0 to properly terminate strings
     for(i = 0; mybuffer[i]; i++);
     printf("\n %s with length %d \n",mybuffer, i);
     return 0;
 }
*/

//ATOI
/*
 int main(int argc, char** argv){
     char mybuffer[100] = {0};
     int number = 0;

     printf("Eingabe:");
     fgets(mybuffer, 100, stdin);
     mybuffer[99] = 0;
     number = atoi(mybuffer); //atoi converts a string to an integer: "7" = 7, "7test" = 7, "test7" = 0
     //Can you see a problem with these return values?
     printf("Your number was: %d\n", number);
    return 0;
 }
*/

//SAVE AS CHAR VARIABLE
/*
 int main(int argc, char** argv){
     char mybuffer[100] = {0};
     char character = 0;
     printf("Eingabe:");
     gets(mybuffer);
     mybuffer[99] = 0;
     character = mybuffer[0]; //simply take the first char of the string and store it in a new variable
     printf("Your char was: %c\n", character);
     return 0;
 }
*/

// BREAK AND CONTINUE
/*
int main(int argc, char** argv){
    char buffer[100] = {0};
    while(1){
        printf("Type 'quit', 'continue' or anything else: ");
        fgets(buffer, 100, stdin);
        if(buffer[0] == 'q')
            break;
        else if(buffer[0] == 'c')
            continue;
        else
            printf("\nYou typed: %s\n", buffer);
    }
    return 0;
}
 */

//Exercise 2.3.1
/*
 int main(int argc, char** argv){
     char mybuffer[100] = {};
     printf("Eingabe: ");
     fgets(mybuffer, 99, stdin);
     mybuffer[99] = 0;
     char s = mybuffer[0];
     switch(s) {
         case 'a':
         case 'A':
            printf("A is for apple\n");
            break;
         case 'b':
         case 'B':
            printf("%s", "B is for bear\n");
            break;
         case 'c':
         case 'C':
            printf("%s", "C is for cat\n");
            break;
         default:
            printf("%s", "Now I know my ABCs\n");
            break;
     }
     return 0;
 }
 */
/***********************************************
 Additional examples as presented in the tutorial
 ***********************************************/
//PRINTF EXAMPLE
/*
 int main(int argc, char** argv){
     // What will be printed?
     printf("%d\n", 3 / 6.0);
     printf("%c\n", 'A');
     printf("%d - %x\n", 42, 42);
     printf("%d - %u\n", 8-9, 8-9);
     printf("%f\n", 1 / 3);
     printf("%c\n", "B");
     return 0;
 }
*/
// WHILE INFINITY EXAMPLE
/*
 int main(){
     char c = 0;
     while (1) {
         c = getchar();
         printf("%c", c);
         if (c == 'q')
             break;
     }
     return 0;
 }
*/


