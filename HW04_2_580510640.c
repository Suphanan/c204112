/* 
Suphanan Mujarin
580510640
HW 04
Problem 2
204112 sec 003
*/

#include <stdio.h>

int main() {
    int count=0;
    int char_;
    int space =0;
    while ((char_ =getchar()) != EOF){
        if (isspace(char_)){
            printf(" ");
           continue;
        }
        putchar(char_);
        count++;
        //printf("%d\n",count );

        if ((count >= 30) && isspace(char_)){
            printf("\n");
            count = 1;
            }
        }


    return 0;
}