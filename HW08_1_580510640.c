/* suphanan mujarin
 * 580510640
 * Lab 08
 * Problem 2
 * 204112 Sec 003 */

#include "T112_HW08_1.h"

void fill_magic_board(int n, int board[][n])
{
    if (n % 2 == 0) {
        return;
    }
    int k = 0;

    init_board(n, board);

    int next_i = -1;
    int next_j = -1;

    for (k = 1; k <= n * n; k++) {
        next_move(&next_i, &next_j, n, board);
        board[next_i][next_j] = k;
    }

}

void next_move(int *row, int *col, int n, int board[][n])
{
	// stub code 
        int keeprow;
        int keepcol;
	   if (board[0][n/2] == 0){  //put num 1 in middle column
            *row = 0;
            *col = n/2;
        }else{
            keeprow = *row;   
            keepcol = *col;
            *row = *row -1;
            *col = *col +1;
            if(*row == -1){   //if  it over on top 
                *row = *row+n;
            }if(*col == n){  // if it over on left side 
                *col =0;
            }if(*col == -1){  //if it over on rigth side
                *col = *col+n;
            }if(*row == n){  // if it over on buttom 
                *row =0;
            }if(board[*row][*col] != 0){ // if have num. in this place
                *row =keeprow+1;
                *col = keepcol;
            }
        }
            
            // if((row -1) < 0){
            //     *row = n-1;
            //     //*col = col;
            // }
            // // else {
            // //     *row =0;
            // //     *col =0;
            // if ((col +1)>(n-1)){
            //     *col =0;
            // }
            // if (board[*row][*col] > 0){
            //     if (row > (n-1)){
            //         row =0;
            //     }
            //     else{}
    
            //     }

    // int begin = (n/2); //find middle column
    // int end = n*2; //final number
    // board[0][begin]=1; //put number 1 in middle of row 0

	
}

