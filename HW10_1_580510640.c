/* suphanan mujarin
 * 580510640
 * HW 10
 * Problem 1
 * 204112 Sec 003 */

#include "T112_HW10_1.h"
#include "string.h"

// function prototype
int binary_search_2(char word[],  char word_list[][MAX + 1], int debug, int lo, int hi);

// function definition
int binary_search(char word[], int size, char word_list[][MAX + 1], int debug) //if type have parametre
{
    // debug = 0;
    int lo = 0;
    int hi = size - 1;
    return binary_search_2(word,  word_list, debug, lo, hi); //argument
}

int binary_search_2(char word[],  char word_list[][MAX + 1], int debug, int lo, int hi)
{

    int mid = (lo + hi) / 2 ;
    if (lo > hi){
        return -1;
    }
    if (strcmp(word_list[mid], word) == 0) {
        if (debug == 1)
            printf("TRYING index: %d\n", mid);
        return mid;
    }
    if (strcmp(word_list[mid], word) < 0) {
        lo = mid+1;
        if (debug == 1)
            printf("TRYING index: %d\n", mid);
        return binary_search_2(word, word_list, debug, lo, hi);
    } else {
        hi = mid-1;
        if (debug == 1)
            printf("TRYING index: %d\n", mid);
        return binary_search_2(word,  word_list, debug, lo, hi);
    }
    return -1;


}