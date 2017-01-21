/* suphanan mujarin
 * 580510640
 * HW 09
 * Problem 2
 * 204112 Sec 003 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main()
{

char word[26];
int count[8001];
char temp[8000][26];
int j=0,l = 0;
int num = 1;
char i;
int keep_num = 0;
int keep = 0;


while((i = getchar()) != EOF){
        if(isalnum(i)){ //chaeck alphabet-number
            word[j] = tolower(i); //chage to small capital letters 
            j++;

        } else if(j > 0){ //for buffer*
            if (word[j-1] == '\0'){ //if end of sentences
                //printf("in\n");
                continue; //if find space pass>>
            }
            word[j] = '\0';
          
            for(l = 0 ; l < num;l++){
                //printf("%s =? %s\n",word,temp[l] );
                if(strcmp(temp[l],word) == 0){ // compare have this word in temp isn't it
                    count[l]++; //if have count will count
                    keep = 1; // set condition is 1 if have this word
                    break;   
                }
            }
            //printf("-----------\n");
            if(keep != 1){ //if don't have 
                count[keep_num] = 1; //get start count 1
                strcpy(temp[keep_num],word); // copy word to temp 
                keep_num++;
            }
            keep = 0;
            //k++;
            num++;
            j=0;
        } 
    }
    //printf("%d %d\n",num,keep_num );
    for(j = 0;j < keep_num ; j++){
        printf("%d %s\n",count[j] , temp[j]); //print how many and word
    }

    return 0;  
}

