/* suphanan mujarin
 * 580510640
 * HW 02
 * Problem 0
 * 204112 Sec 003 */

#include "T112_HW02_0.h"
#include <math.h>

int most_frequent_digit(int num) {
    
    int count[10] ={};
    int result = NULL;
    int keep =0;
    int i=0;
    int current=0;
    num = fabs(num);
    while (num != '\0'){ // add while loop
        current = num %10;
        num = num / 10;
        count[current] += 1;
    }
    result = count[0];
    for (i=0;i<10;i++){
        if (count[i] > result){
            result =count[i];
            keep = i;
        }
    }

    return keep;
}