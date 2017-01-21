/* suphanan mujarin
 * 580510640
 * Lab 08
 * Problem 2
 * 204112 Sec 003 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>




int main(int argc,char *argv[]){
    int i,j;
    int len_;
    char punct = '0';
    for (i = 1;i < argc;i++){
        len_ =strlen(argv[i]);
        for (j = len_-1;j >=0;j-- ){

            if (isalnum(argv[i][j])){ //ถ้าเป็นเลข หรือ อักษรให้สดง * ด้วยยกเว้นตัวสุดท้าย
                printf("%c",argv[i][j]);
                if(j != 0){
                    printf("*");
                }
            }
            else{
                punct=argv[i][j]; //เก็บเครื่องหมายพิเสษ

                //continue;
            }

            
        }
        if (punct != '0'){
            printf("%c", punct);
            punct = '0';
        }
       
            
        


        if(i < argc-1){
            printf(" ");  

        }
    }
    printf("\n");
    return 0;
}
 
// void banner(char *word){
//     len_ =strlen( word)
//     for (i = len_-1;i >=0;i-- ){
//         if (isalnum(i)){
//             printf("%c",i);
//             if (i != 0){
//                 printf("*");
//             }
        
//         if (ispunct(i)){
//             printf("%c\n",i);
//         }
//         if (i == '\0'){
//             printf(" ");
//         }
// }



// int main(int argc,char ** argv){
//     for (i = 1;i < argc;i++){
//         banner(argv[i]);

//     }


//     return 0;
// }

