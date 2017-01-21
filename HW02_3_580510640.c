/*Suphanan Mujarin
 * 580510640
 * HW 02
 * Problem 3
 * 204112 Sec 003 */

#include "T112_HW02_3.h"
#include <math.h>
int reverse(int num);

int palindrome_in_base(int num, int base)
{
    int a = 0;
    int i = 0;
    int keep = 0;
    int re_sult =0;
    int result = 0;

    while (num > 0){ // converse to base
        keep = num % base;
        num = num / base;
        a = a + (keep * (pow(10,i)));
        i += 1;
    }
    result=a;
    re_sult = reverse(a);
    if (result == re_sult){ //compare
        return 1;
    }
    else{
        return 0;
    } 
}     


int reverse(int num) //func กลับเลข
{
    int row =0;
    row = floor(log10(num) + 1); // หาหลัก
    row=row-1; 
    int sum_ = 0; //กำหนดเพื่อเเก็บค่าผลบวก
    while (num > 0){  
        int result = num % 10;
        num = num / 10;
        sum_ += (result * (pow(10,row)));
        row -= 1;
    }
    return sum_;

}
