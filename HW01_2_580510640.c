/* 
Suphanan Mujarin
580510640
HW 01
Problem 2
204112 sec 003
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x;
    scanf("%d",&x);
    int y = x;
    int i = 2;
    printf("%d is ",x);
 
    if ((y != 0) || (y != 1) || (y != 2)){
        while(i <= sqrt(x)){
            if ( y % i == 0){
                if (y == i){
                    printf("%d",y);
                    y /= i;
                    break;
                }
                else{
                    printf("%d x ",i);
                }
                y /= i;
                i-=1;
            }
            i += 1;
        }
    }

    if ((y == 0)||(y == 1 )||( y != x)){
        if (y != 1 || (x == 1) ) {
            printf("%d",y);
        }
    }
    if ((y == x) && (y >0) && (y != 1)){
        printf("prime");
    }

    return 0;

 
}