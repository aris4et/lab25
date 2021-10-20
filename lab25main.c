/** lab25main.c
* ================================================================
*    Name: Benjamin & Aris
* Section: T1
* Project: Lab25 - Dynamic Memory Allocation II
* =================================================================
* 
* In this lab: memory is allocated dynamically,
* using the c library functions malloc() and reaclloc().
* Specifically an array is allocated using malloc(), then
* the array size is changed using realloc() as it is filled
* with random integers.
*
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "lab25functs.h"

//local function prototypes


int main() {

    /** TASK 0 - read/understand the seedGenerator() function.
     * This function seeds the random number generator.  
     * This function will only allow srand() to be called once. 
     * Call the function below.  Try calling it second time. 
     * Why is the random number generator not seeded a second time?
     */
    seedGenerator();

    /** TASK 1 - Allocate an array of INIT_SIZE integers
     * using the malloc() function call.
     */
    
    int* intarray = NULL;
    intarray = (int*)malloc(sizeof(int)*INIT_SIZE); 

    /** TASK 2 - declare and initialize an int variable to
     * hold the size of a data set of random integers.
     * The size should vary between 1 and 1000.  In other
     * words you are assigning the dataset size to be
     * a random number between 1 and 1000.
     */
    int random_size = rand() % 1000 + 1;

    /** TASK 3 - complete the fillArray() function implementation
     * and call it.
     * part 1 - implement fillArray() using realloc()
     *    Note: double the array in size when it is reallocated
     * part 2 - call the function below and print out a message
     * that includes the initial size of the array, the
     * randomly generated data set size (from task 2), and the number
     * of times doubled (returned by the function).
     */
     int int1 = fillArray(intarray, INIT_SIZE, random_size);
     printf("%d", int1);
    /** TASK 3.5 - because of the design of this lab, and the use of realloc()
     *  in the function fillArray(), the array CAN NOT be freed in main
     *  Though this is bad practice, do not free(); in this lab
     */

    /** TASK 4 -  IMPORTANT - When you submit this lab to zyBooks be
     *     sure that you comment out the line in main() that calls
     *     the seedGenerator() function.  Also double check the range
     *     on your random number generation in task 2.  It should be between
     *     1 and 1000 inclusive.
     */

    return 0;
}
