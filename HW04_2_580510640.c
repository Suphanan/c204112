/* 
Suphanan Mujarin
580510640
HW 04
Problem 2
204112 sec 003
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    int char_;
    int keep;
    int count = 0;
    int space =0;
    while ((char_ =getchar()) != EOF){
        
        /*if (isspace(char_)){
            space++;
            if (space>1){ 
                //count--;
                continue;
                }
        }
        else{
            space = 0;
        }*/
        
        putchar(char_);
        count++;
        printf("%d",count);

        if (count % 30 == 0){
            printf("\n");
            count = 0;
        }

    
    }


    return 0;
}
