/* Suphanan Mujarin
 * 580510640
 * HW 02
 * Problem 1
 * 204112 Sec 003 */

#include <stdio.h>
#include <stdlib.h> //rand & srand
#include <time.h>
#define SET_SEED srand(time(NULL))

int main() {
int num;
int random_;
int i;
int a=0;
int count;


SET_SEED;
srand(time(NULL));
random_= (rand() % 999)+1;
        printf("%d",random_);

    for (i=1;i <=5;i++)
    {
        while(a!=1)
        {
            printf("Round %d: Plese input an  interger between 1 - 999: ",i );
            scanf(" %d",&num);
            if (num > 999 || num <0){
                printf("Round %d: Plese input an  interger between 1 - 999:",i);
                scanf(" %d",&num);
                break;
            }
        }
        if (num == random_){
            printf("Congratulations,you guessed right.\n");
            count =1;
            break;
        }
        else if (num > random_){
            printf("Sorry,your guess was too high,try again...\n");
            count =0;
        }
        else if (num < random_){
            printf("Sorry,your guess was too low,try again...\n");
            count =0;
        }
    }
    
      
    return 0;
}

