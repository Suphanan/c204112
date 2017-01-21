/* 
Suphanan Mujarin
580510640
HW 04
Problem 1
204112 sec 003
*/

#include <stdio.h>
int characters_();

int main(){
    while(characters_() == 1); //recieve word many times
    return 0;


}
int characters_() {
    char char_;
    char keep;
    char compare ='1'; 
    int count = 1;
    int ans = 1;
    int max_count =0;

    while ((char_ =getchar()) != '\n'){ //recieve input for each alpha
        keep = tolower(char_); //make to small capital
        if (char_ == EOF){ 
            return 0;
        }
        putchar(keep); //output each char

        
        
        if (keep - compare == 1 ){ //mean next alpha
            count ++;  //count continue alpha
            
        }
        else { //if not reset count equa 1
            count =1;
        
        }
        if (compare > keep){ //check is in order
            ans = 0;
        }
        compare = keep;
        if (max_count < count){ //set for max count)continue alpha
            max_count = count;
            
        }
    }
    if (max_count >= 3){ //print case a
        printf(" CASE A: three characters in sequence.\n");
    }
    if (ans != 0){ //print case b
        printf(" CASE B: all characters in alphabetic order.\n");
        }
    if (ans == 0 && max_count < 3){ //newline forcase bif  print 2 case in one word
        printf("\n");
    }
    return 1;
    }
        
