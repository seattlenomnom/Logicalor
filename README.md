# logicalor
## Description
A fancy version of a demonstration program found in Kocha, Stephen,
"Programming in C 4th ed." It is a command line program which takes two
arguments. The arguments are char arrays containing one's and zero's which
represent two one byte numbers. The program returns the bitwise logical or of
the two arguments. There is input validation, conversion of char arrays to 
integers, taking the bitwise logical or of the integers, and outputing the 
result as a char array of one's and zero's.
## Notes
### 12/03/2023
set up project on local host, set up project on github.

Input validation

    Does the program have the correct number of args?

    Does argv[1], and argv[2] have the correct number of chars?

    Does argv[1], and argg[2] consist of char 1's and zero's?

Obtaining the bitwise OR of argv[1] and argv[2]

    Don't convert argv[1] and argv[2] into ints, use a lookup talble to 

    generate the result and build the result char binary array. Do an expermnt

    on a temp branch to see if will work. Yes it worked: two dimensional array

    lookup table. To change logical function to bitwise AND, create a separate

    lookup table, very small change.
