/* suphanan mujarin
 * 580510640
 * Lab 06
 * Problem 2
 * 204112 Sec 003 */

#include "T112_Lab06_2.h"


void max_mid_min(int* x, int *y, int *z)
{
    int st =0; //first keep max
    int nd =0; //second keep mid
    int rd =0; //third keep min

    if ( *x > *y ){ //compare find max(st) min(rd)
        st = *x; 
        rd = *y;
    }
    else{
        st = *y;
        rd = *x;
    }
    if (*z > st){ //compare find max(st) mid(nd)
        nd = st;
        st = *z;
    }
    else if (*z < rd){ //compare find min(rd) mid(nd)
        nd = rd;
        rd = *z;
    }
    else{   //find mid(nd)
        nd = *z;
    }

    *x = st; //change value on variable
    *y = nd;
    *z = rd;

}
//case 5 3 4