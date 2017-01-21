/* suphanan mujarin
 * 580510640
 * HW 05
 * Problem 2
 * 204112 Sec 003 */

#include "T112_HW05_2.h"


void max_mid_min(int **add_max, int **add_mid, int **add_min)
{
    
    int *p_max = *add_max;
    int *p_mid = *add_mid;
    int *p_min = *add_min;
    int st = **add_max;
    int nd = **add_mid;
    int rd = **add_min;


    if ( st > nd){ //find max and min
        *add_max = p_max;
        *add_min = p_mid;
    }
    else{
        *add_max = p_mid;
        *add_min = p_max;
    }
    if (rd > **add_max){ //compare max,find max
        *add_max = p_min;
    }
    if (rd < **add_min){ //compare min,find min
        *add_min = p_min;
    }
    if ((**add_max == st && **add_min == nd ) || (**add_max == nd && **add_min == st )){
        *add_mid = p_min; //find mid
    }
    else if ((**add_max == nd && **add_min == rd ) || (**add_max == rd && **add_min == nd )){
        *add_mid = p_max;
    }
    else{
        *add_mid = p_mid;
    }



}