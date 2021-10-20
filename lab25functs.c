/** lab25functs.c
* ================================================================
* Name: Benjamin & Aris
* Section: T1
* Project: Lab25 - Dynamic Memory Allocation II
* =================================================================
*/

#include "lab25functs.h"

/** ----------------------------------------------------------
 * fillArray() - fills array with random ints its size is
 * specfied by dataSetSize
 * @param array is a ptr to an array of integers
 * @param arraySize is the size of the array of integers
 * @param dataSetSize is the final size of the array of integers
 * which can be smaller, equal to, or larger than the array's initial
 * size
 * @return the number of times the initial array was doubled in size
 * to support the larger data set
 * ----------------------------------------------------------
 */
int fillArray(int *array, int arraySize, int dataSetSize) {
    return 0;
}

/** ----------------------------------------------------------
 * seedGenerator() - seeds the random number generator only once.
 * ----------------------------------------------------------
 */
void seedGenerator() {
    //set up for and then seed random number
    //generator
    static int seedDone = 0; //static variables retain their value between calls
    
    
    // modified so the seed is only done once
    if (!seedDone) {
        srand(time(0));
        seedDone = 1;
        printf("Random number generator seeded...\n");
    }
}