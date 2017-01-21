/* suphanan mujarin
 * 580510640
 * Lab 08
 * Problem 2
 * 204112 Sec 003 */

#include "T112_HW08_2.h"

// function prototype

// function definition 

void in_place_rotate(int n, int array[n][n])
{
    int keep=0;
    int row=0;
    int col=0;
    for (row=0; row<n/2; row++){
        for (col=row; col<n-row-1; col++){
            //printf("%d",row );
            //printf("%d\n",col );
            keep = array[row][col];  //should for begin 
            array[row][col] = array[n-col-1][row];
            array[n-col-1][row] =array[n-row-1][n-col-1];
            array[n-row-1][n-col-1]= array[col][n-row-1];
            array[col][n-row-1] = keep;
        } 
        //print_board(n, array);
    }
}
// relationship in code  ฿alternate b/w row-col
//if input 5 
// statr 00          start 11 [row][col]
//00=40              11=31    [col][row]
//40=44              3133     [row][col]
//44=04              33=13    [col][row]
//04=start           13 = start








