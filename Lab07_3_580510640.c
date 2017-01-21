/* Suphanan Mujarin
 * 580510640
 * HW 06
 * Problem 2
 * 204112 Sec 003 */

#include "T112_Lab07_3.h"


int merge_array(int len_a, int arr_a[], int len_b, int arr_b[], int arr_c[])
{

    int len_c = len_a+len_b;
    int i=0;
    int j=0;
    int k=0;
    while (i < len_a && j < len_b){
        if (arr_a[i] < arr_b[j]){
            arr_c[k] =arr_a[i];
            i++;
            k++;
        }
        else{
            arr_c[k]=arr_b[j];
            j++;
            k++;
        }

    }
    while (i < len_a){
        arr_c[k] = arr_a[i];
        i++;
        k++;
    }
    while (j < len_b){
        arr_c[k] = arr_b[j];
        j++;
        k++;
    }

    




    return len_c;
}
