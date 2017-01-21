/* Suphanan Mujarin
 * 580510640
 * Lab 04
 * Problem 2
 * 204112 Sec 003 */

#include "T112_Lab04_2.h"
#include "math.h"

int int_input() 
{   
    char char_;
    int sum = 0;
    int keep = 0;
    int count = 0;
    int sign = 1;
    while ((char_ =getchar()) != '\n'){ //recieve positive &negative num
        if (char_ == '-'){
            sign = -1; //keep sign
            continue;
        }
        keep = char_ -'0';
        count++;
        if (count > 1){
            sum = sum*10; 
        }
        sum =sum + keep; //บวกๆๆเก็บค่า
    }
        sum =sum *sign; //put sign
    return sum;
}


double real_input()
{   
    char char_;
    double remaindr = 0;
    double sum = 0;
    double keep = 0;
    int count = 0;
    int sign =1;
    int dot =0;
    while ((char_ =getchar()) != '\n'){
        if (char_ == '-'){ //เก็บเครื่องหมาย
            sign = -1;
            continue;
        }
        if (char_ == '.'){ //ดักทศนิยม
            dot = 1;
            count = 0;
            continue;
        }
        keep = char_ -'0';
        count++;
        if (dot == 0){ //บวกจำนวนเต็ม
            if (count > 1){
                sum = sum*10;

            }
            sum =sum + keep;
        }
        else
        {
            keep = keep /(pow(10,count)); //บอกกำลัง
            remaindr = remaindr + keep;
        }




    }
        sum =sum + remaindr; //เอาจำนวนเต็มมาบวกกับทศนิยม
        sum = sum * sign; //ใส่เครื่องหมาย
    return sum;

}
