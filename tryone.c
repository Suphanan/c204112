/* Suphanan Mujarin
 * 580510640
 * HW 02
 * Problem 1
 * 204112 Sec 003 */

#include "T112_HW03_1.h"
#include <math.h>

int check_leap_year(year)
{
    if(year % 4 == 0){
        if((year % 400 == 0) && (year % 100 != 0) || (year %400 == 0){

    
            return 1;
}
        else{

            return 0;
        }
    }
}


void display_calendar(int month, int year)
{
    if ((m == 1)) || (m == 2)){ //jan & feb = month 13 & month 14 of the year before
    m +=12;
    y -= 1;

    int n = d + 2m + floor(3(m+1)/5) + y + floor(y/4) - floor(y/100) + floor(y/400) + 2;
    int day = n % 7;
    int month;
    switch (month){
        case 1: printf("January\n");
        case 2: printf("Febuary\n");
        case 3: printf("March\n");
        case 4: printf("Apirl\n");
        case 5: printf("May\n");
        case 6: printf("June\n");
        case 7: printf("July\n");
        case 8: printf("August\n");
        case 9: printf("September\n");
        case 10: printf("October\n");
        case 11: printf("November\n");
        case 12: printf("December\n");

    }
    printf("%d",year);
    if(month==1||month==3||month==5||month==7|| month==8|| month==10|| month==12)
    {
        days_n_m=31;
    }
     else if(month==2)
 {
        if check_leap_year(year) {
            ndays_n_m=29;
        }
        else{
        days_n_m=28;
            
        }

 }
 else num_days=30; 


    for ( day = 1; day <= 1; day++ )
    {
        printf(" ");
    }


    for ( day = 1; day <= days_in_month[month]; day++ )
    {
        printf("%2d", day );


        if ( ( day ) % 7 > 0 ){
            printf("   " );
        }
        else{
            printf("\n " );
    }

     
    }
}

    return 0;
}





