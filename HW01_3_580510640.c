/* 
Suphanan Mujarin
580510640
HW 01
Problem 3
204112 sec 003

*/

#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);

    int e= x%10;
    
    switch(e){
    case 0: printf("Metal ");
        break;
    case 1: printf("Metal ");
        break;
    case 2: printf("Water ");
        break;
    case 3: printf("Water ");
        break;
    case 4: printf("Wood ");
        break;
    case 5: printf("Wood ");
        break;
    case 6: printf("Fire ");
        break;
    case 7: printf("Fire ");
        break;
    case 8: printf("Earth ");
        break;
    case 9: printf("Earth ");
        break;
    }

    int z= x%12;
    switch(z){
    case 0: printf("Monkey");
        break;
    case 1: printf("Rooster");
        break;
    case 2: printf("Dog");;
        break;
    case 3: printf("Pig");
        break;
    case 4: printf("Rat");
        break;
    case 5: printf("Ox");
        break;
    case 6: printf("Tiger");
        break;
    case 7: printf("Rabbit");
        break;
    case 8: printf("Dragon");
        break;
    case 9: printf("Snake");
        break;
    case 10: printf("Horse");
        break;
    case 11: printf("Goat");
        break;
    
    }

    return 0;
}