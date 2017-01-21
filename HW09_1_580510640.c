/* suphanan mujarin
 * 580510640
 * HW 09
 * Problem 2
 * 204112 Sec 003 */

#include "T112_HW09_1.h"

// function prototype

// function definition

void spiral(int n, int board[n][n])
{
    //end=n*n;
    int n_;
    int row = 0, col = 0, keep = 1;
    int result = 0;
    if (n % 2 != 0) { // last number (with odd)
        result = n / 2;
        board[result][result] = n * n;
    }

    for (row = n - 1; row > 0; row--, col++) {
        for (n_ = col; n_ < row; n_++) { //begin spiral -print top
            board[col][n_] = keep;
            keep++;
        }
        for (n_ = col; n_ < row; n_++) { // for print right side
            board[n_][row] = keep;
            keep++;
        }
        for (n_ = row; n_ > col; n_--) { // for print down
            board[row][n_] = keep;
            keep++;
        }
        for (n_ = row; n_ > col; n_--) { // for print left sidemake
            board[n_][col] = keep;
            keep++;
        }

    }

}