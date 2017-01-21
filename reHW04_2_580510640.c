/* 
Suphanan Mujarin
580510640
HW 04
Problem 2
204112 sec 003
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char char_;
    int word = 0;
    int count_1 = 0;
    int count_2 = 0;

    while ((char_ = getchar()) != EOF ) {

        if (count_2 > 0) {

            if (char_ == ' ') {

                continue;
            } else {

                count_2 = 0;
            }
        }
        if (count_1 > 0) {

            if (char_ == '.') {

                putchar(char_);
                word++;

                continue;

            } else if (char_ == ' ') {

                putchar(char_);
                word++;

            } else if (char_ == '\n') {

                word = 0;
                count_1 = 0;

            } else {

                count_1 = 0;
            }
        }
        if (char_ == '\n' && a < 30) {

            putchar(' ');

            word++;

            continue;
        }
        
        putchar(char_);
        word++;

        if (word >= 30 && char_ == ' ') {


            putchar('\n');

            word = 0;
        }
        if (char_ == '.') {


            count_1++;
        }
        if (char_ == ' ') {

            count_2++;
        }

    }


    return 0 ;
}


