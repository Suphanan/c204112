/* Suphanan Mujarin
 * 580510640
 * HW 06
 * Problem 2
 * 204112 Sec 003 */


#include "T112_Lab07_2.h"


void my_strcpy(char *str1, char *str2)
{
    while( *str2 != '\0')  {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 ='\0';
    
}
void my_strrev(char *str)
{
    int i =0;
    int count_=0;
    int keep[10000];
    while( str[i] != '\0' ){
        count_++;
        keep[i] =str[i];
        i++;
    }
    for (i=0;i<count_ ;i++){
        str[i]=keep[count_-i-1];
    }


    return 0; 
}