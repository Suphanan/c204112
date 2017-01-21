/* suphanan mujarin
 * 580510640
 * Lab 08
 * Problem 2
 * 204112 Sec 003 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 30

int main() {
    char word_[MAX+1];  //old wird
    scanf("%s",&word_);
    char replace_w[MAX+1]; //replace word 
    scanf("%s",&replace_w);
    int j = 0;
    char i;
    char keep[MAX+1];// array for keep sentence -word

    getchar();
    while((i = getchar()) != EOF){ 
        if(isalnum(i)){ // check is alphabet-digit isn' it
            keep[j++] = i; //if have al-num put in keep if end od sentence compare them
        } else {
            keep[j] = '\0'; 
            if(strcmp(keep,word_) == 0){ //compare,is equa.. isn't is
                printf("%s",replace_w ); //if yes print new 
            } 
            else{
                printf("%s",keep); //if not print old
            }
            j = 0;
            putchar(i);
        }

    }


    return 0;
}