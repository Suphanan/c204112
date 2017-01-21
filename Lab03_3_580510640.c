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
int a;
int count;
char again;
int n;

do{
SET_SEED;
srand(time(NULL));
random_= (rand() % 999)+1; //random num
        //printf("%d",random_);

    n = 0;
    for (i=1;i <=5;i++){
        do
        {
            printf("Round %d: Please input an  interger between 1 - 999: ",i ); 
            scanf(" %d",&num);//recieve input
            getchar(); //เผื่อรับอักษร 
        }while(num > 999 || num <=0); //เงื่อนไขรับเลข คือ ในช่วง จำนวนเต็ม 0-999
        printf("\n");

        if (num == random_){ //ถ้าทายถูก
            printf("Congratulations,you guessed right.\n\a\a\a\a\a");
            count =1; 
            break;
        }
        else if (num > random_){ //ถ้าทายสูงไป
            printf("Sorry,your guess was too high,try again...\n");
            count =0;
        }
        else if (num < random_){ //ถ้าทายต่ำไป
            printf("Sorry,your guess was too low,try again...\n");
            count =0;
        }
    }
    printf("The correct answer is %d\n",random_ ); //เฉลยคำตอบ

    if (count == 1){ //เคำแสดงผลการเล่นเกม
        printf("You won\n");
    }
    if (count == 0){
        printf("You Lost\n");

    }
    while (n != 1){ //ถามความสมัครใจในการเล่นต่อ
        printf("Play again(Y/N): ");
        scanf("%s",&again); //บังคับใส่ input จนกว่าจะถูก
        if(again == 'N'|| again =='Y' || again == 'y' || again == 'n' ) //รับinput case-insensitive
        {
            n=1;
        }
   }


    }while(again == 'Y' || again == 'y'); //ขึ้นกลับไปทำใหม่

        if (again == 'N' || again == 'n'){ //ออกจากโปรแกรม
        printf("Bye\n");
    
        }

    return 0;
}

