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
 * check that the arges are a sequence of char 1's and 0's.
 *
 * Create a function that takes two arrays of one's and zero's and returns
 * a new char array that is made up of one's and zero's that represent the
 * bitwise OR of the original arrays.
 *
 * used a two dimensional array as a lookup table. Converted indexes from
 * char to ints. Several small successes, some insight, made a big success.
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
bool byteSized(char *s);
bool validBinNum(char *s);
void printOR(char *s1, char *s2);
char tableLookup(char c1, char c2);
int chartoint(char c);


int main(int argc, char *argv[]) {

    int errorCode;


    errorCode = 0;

    if(argc != 3){
        printf("usage: logicalor arg1 arg2\n");
        exit(errorCode);
    }


    if(inputValid(argv[1], argv[2]))
        printOR(argv[1], argv[2]);
    else
        printf("input not valid\n");







    return(errorCode);
}


/* function definitions */

bool inputValid(char *s1, char *s2) {

    bool correct;

    correct = false;

    if(byteSized(s1) && byteSized(s2)){
        printf("args are correct length\n");
        correct = true;
    }
    else {
        printf("args are not the correct length\n");
        correct = false;
    }

    if(validBinNum(s1) && validBinNum(s2)){
        correct = true;
        printf("arg1 and arg2 are both valid\n");
    }
    else{
        correct = false;
        printf("arg1 and arg2 are not both valid\n");
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



bool validBinNum(char *s){
    bool correct;
    int index;

    correct = false;

    for(index = 0; *(s + index) != '\0'; ++index){
        if(*(s + index) == '0' || *(s + index) == '1')
            correct = true;
        else{
            correct = false;
            break;
        }
    }


    return(correct);
}





void printOR(char *s1, char *s2){

    char r[CORRECTSIZE + 1];
    int index;

    index = 0;
    for(index = 0; index < CORRECTSIZE; ++index){
    r[index] = tableLookup(s1[index], s2[index]);
    }
    r[CORRECTSIZE] = '\0';

    printf("%s \n", s1);
    printf("%s \n", s2);
    printf("%s\n", r);

}



char tableLookup(char c1, char c2){
    char result;
    char table[2][2] = {{'0', '1'}, {'1', '1'}};
    int x_index, y_index;

    x_index = chartoint(c1);
    y_index = chartoint(c2);

    result = table[x_index][y_index];



    return(result);

}


int chartoint(char c){
    int result;

    if(c == '0')
        result = 0;
    else
        result = 1;

    return(result);

}













