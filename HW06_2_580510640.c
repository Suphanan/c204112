/* Suphanan Mujarin
 * 580510640
 * HW 06
 * Problem 2
 * 204112 Sec 003 */

#include "T112_HW06_2.h"

int check(int len,int a[],int b[]){
    int i=0;
    int check =0;
    for (i=0;i < len;i++){

        if ( a[i] == b[i])
        {
            check += 1;
        }
    }

    if (check==len)
    {
      
        return 1;

    }
    return 0;

}


int is_rotation(int len, int arr1[], int arr2[])
{
    int b_1[len];
    int temp =0;
    int i=0,j=0;
    for ( i = 0; i < len; ++i)
    {
        b_1[i]=arr2[i];
    }
    i=0;
    for ( i = 0; i < len; i++)
    {
        temp= b_1[0];
         for (j = 0; j < len; j++){
            b_1[j] = b_1[j+1];
    }
    b_1[len-1]=temp;    
    temp=check(len,arr1,b_1); 
     if (temp==1)
    {
        return TRUE;
    }

   }
    return FALSE;
}