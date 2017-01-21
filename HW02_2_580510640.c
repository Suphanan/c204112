/*Suphanan Mujarin
 * 580510640
 * HW 02
 * Problem 3
 * 204112 Sec 003 */

#include "T112_HW02_2.h"
#include <stdlib.h>
#include <math.h>

int is_rotation(int num1, int num2)
{
    long long temp1 = num1; //ทำเป็น long long เพื่อ กันเกิดoverflow
    long long temp2 = num2; 
    int row1 = (log10(num1) + 1);
    int row2 = (log10(num2) + 1); // หาหลัก
    long long i;
    long long keep;
    if (row1 != row2){ //ทำหลักให้เท่ากัน
        int row_= abs(row1 - row2); 
        if (row1 < row2){
            temp1 =temp1 * (pow(10,row_));
            row1 = row2;
        }
        else{
            temp2 =temp2 * (pow(10,row_));
            //printf("%d\n",num2 );
            row2 = row1;
        }

    }
    long long front;
    long long back;


    //printf("%d %d\n", num1, num2);
    //printf("%d  %d\n", row1, row2);
    //int pow_ =(pow(10,row2-1));
    for (i=1;i <= row2+1;i++){ //กลับหลักเพื่อเปรียบเทียบ ทีละอัร
        front = temp2 % 10;
        back = temp2 / 10;
        temp2 = front * (pow(10,row2-1));
        //printf("\nnum2 front->> %d\n", num2);
        temp2 += back;
        //printf("num2->> %d\n", num2);
        if (temp1 == temp2){ //เปรีบยเทียบ
            return 1;
        }
    }
    return 0;
}