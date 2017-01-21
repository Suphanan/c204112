/* suphanan mujarin
 * 580510640
 * Lab 08
 * Problem 2
 * 204112 Sec 003 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 30
void str_to_lower(char word[]){
    int i = 0;
    while(word[i] != '\0'){
        word[i] = tolower(word[i]);
        i++;
    }
}

int main() {
    char word_[MAX+1]; //max is 30 plus 1 coz array have null
    scanf("%s",&word_);
    str_to_lower(word_);
    char replace_w[MAX+1];
    scanf("%s",&replace_w);
    str_to_lower(replace_w);
    int j = 0;
    char i;
    char keep[MAX+1];
    char temp[MAX + 1];
    int a;
    getchar();
    while((i = getchar()) != EOF){
        if(isalnum(i)){
            keep[j] = i;
            temp[j++] = tolower(i);
        } else {
            keep[j] = '\0';
            temp[j] = '\0';
            if(strcmp(temp,word_) == 0){
                for (a = 0;a < j;a++){
                    if(isupper(keep[a])){
                        replace_w[a] = toupper(replace_w[a]); //if old is capital make replace word to capital
                    }
                    else if (islower(keep[a])) { //bit if old is small capital make replace word to small capital
                        replace_w[a] = tolower(replace_w[a]);
                    }  
                }
                printf("%s",replace_w );
            } 
            else{
                printf("%s",keep);
            }
            j = 0;
            putchar(i);
        }
    }
    return 0;
}