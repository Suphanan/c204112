#include "T112_HW03_1.h"

int main()
{
    int month;
    int year;

    printf("Please input month and year: ");
    scanf("%d %d", &month, &year);
    
    display_calendar(month, year);
    
 
    return 0;
}

