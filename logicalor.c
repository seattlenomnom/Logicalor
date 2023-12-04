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
*/



/* includes */

#include <stdio.h>
#include <stdbool.h>






/* defines */





/* data structure defines */





/* function declarations */

bool argsAreCorrect(char *s1, char *s2);



int main(int argc, char *argv[]) {

    int errorCode;


    errorCode = 0;



    if(argsAreCorrect(argv[1], argv[2]))
        printf("Ya!\n");
    else
        printf("Not Ya\n");

    return(errorCode);
}


/* function definitions */

bool argsAreCorrect(char *s1, char *s2) {

    bool correct;


    correct = true;






    return(correct);
}

