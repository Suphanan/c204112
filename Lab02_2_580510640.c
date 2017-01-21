/* 
suphanan_mujarin
580510640
Lab 02
problem 1
204112 sec 003
*/

#include <stdio.h>

int main() {
    char c; 
    scanf("%c", &c); // reciev character
    int encoded_c;

    if ((c != '0') || (c != '1') || (c != '2') || (c != '3') || (c != '4') || (c != '5') || (c != '6')|| (c != '7')|| (c != '8')|| (c != '9')){
        encoded_c=(c / 2)+26; //if not number (c/2)+26
    }  
    else{
        encoded_c= '9' - c; //if yes '9'-c
    }
    printf("%c\n%o\n%x\n%d\n",encoded_c,encoded_c,encoded_c,encoded_c); // print charater,oct,hex,dec


    return 0;
}