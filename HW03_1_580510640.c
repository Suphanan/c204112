/* Suphanan Mujarin
 * 580510640
 * HW 03
 * Problem 1
 * 204112 Sec 003 */

#include "T112_HW03_1.h"
#include <math.h>



int check_leap_year(year) //check leap year
{
    if(year % 4 == 0){
        if (year % 400 == 0)
        {
            return 1;
        }
        else if (year % 100 == 0)
        {
            return 0;
        }  
        else
        {
            return 1;
        } 
   
  
    } 
    return 0;
}

void display_calendar(int month, int year)
{
    int m = month;
    int y = year;
    int d = 1;
    int days_n_m;


    if ((month == 1) || (month == 2))
    { //jan & feb = month 13 & month 14 of the year before
    m +=12;
    y -= 1;
    }

    int n = d + (2*m) + floor(3*(m+1)/5) + y + floor(y/4) - floor(y/100) + floor(y/400) + 2;
    int day = n % 7; //formula calculate first day of month

    if(month==1||month==3||month==5||month==7|| month==8|| month==10|| month==12)
    {
        days_n_m=31; //defind day in month
    }
     else if(month==2)
    {
        if (check_leap_year(year))
        {
            days_n_m=29;
        }
        else
        {
            days_n_m=28;
        }
    }

    else
    {
        days_n_m=30;
    }

    switch (month){ //print month(input)
        case 1: printf("    January");
            break;
        case 2: printf("    February");
            break;
        case 3: printf("    March");
            break;
        case 4: printf("    April");
            break;
        case 5: printf("    May");
            break;
        case 6: printf("    June");
            break;
        case 7: printf("    July");
            break;
        case 8: printf("    August");
            break;
        case 9: printf("    September");
            break;
        case 10: printf("    October");
            break;
        case 11: printf("    November");
            break;
        case 12: printf("    December");
            break;

    }
    printf(" %d\n",year);
    printf("Su Mo Tu We Th Fr Sa\n" );


    int i;
    if (day == 0){ //defind saturday
        day =7;
    }

    for ( i = 1; i < day+days_n_m ; i++ ) //print day 
    {
        if (i < day){ //ถ้าวันยังไม่ถึง ปริ้น --
            printf("-- ");
        }
        else{
            printf("%2d ", i-day+1); // ปริ้น วัน 1,2,3...-30(31,29,28)
        }

        
        if (i % 7 == 0){ //เมื่อครบ 7วันขึ้นnewline
            printf("\n" );
        }
    }
    if ((i -1)% 7 != 0){
         printf("\n"); // บันทัดว่างๆๆสุดท้ายห
    }
   
}






