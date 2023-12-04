/* logicalor.c   source
 *
 * Description:
 * logicalor is a command line program which takes two arguments, both rep-
 * resenting binary numbers which will be bitewise logical ORed and output as
 * a char string representing a binary number.
 *
 * Notes:
 *
 * 12/03/2023
 * Set up project on local host, set up project on github.
 *
 * Validate input
 * create a function, bool validInput(char s1, char s2) which makes sure the
 * char arrays are of the correct length and represent single byte binary
 * numbers.
 *
 * check for number of agrs.
 * check for correct size of each arg.
 *
 *
*/



/* includes */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>






/* defines */

#define CORRECTSIZE 8



/* data structure defines */





/* function declarations */

bool inputValid(char *s1, char *s2);
bool byteSized(char *s1);



int main(int argc, char *argv[]) {

    int errorCode;


    errorCode = 0;

    if(argc != 3){
        printf("usage: logicalor arg1 arg2\n");
        exit(0);
    }


    if(inputValid(argv[1], argv[2]))
        printf("Ya!\n");
    else
        printf("Not Ya\n");

    return(errorCode);
}


/* function definitions */

bool inputValid(char *s1, char *s2) {

    bool correct;

    correct = true;

    if(byteSized(s1) && byteSized(s2)){
        printf("args are correct length\n");
        correct = true;
    }
    else {
        printf("args are not the correct length\n");
        correct = false;
    }

    return(correct);
}



bool byteSized(char *s){

    bool correct;
    size_t len;
    correct = true;

    len = strlen(s);
    if(len != CORRECTSIZE)
        correct = false;
    else
        correct = true;

    return(correct);
}














