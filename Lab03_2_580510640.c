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
    char move;
    int random_;
    int i;
    int a=0;
    int you_count=0;
    int my_count=0;
    int count=0;  
    for (i=1;i <=3;i++){
    SET_SEED;
    srand(time(NULL));
    

    while(a!=1){
        printf("Set %d: Your move (r for rock, p for paper, s for scissors): ",i); 
        scanf("  %c",&move);//recieve input 
        if(move=='r'||move=='p'||move=='s' || move == 'R' || move == 'S' || move == 'P') //รับเฉพาะ r p s แบบ case-insensitive
        {
            break;
        }
    }


    if (move == 'r' || move =='R') { //กำหนดค่าเพื่อเปรียบเทียบ
        move = 1;
    }else if (move == 'p' || move == 'P' ){
        move = 2;

    }else if (move == 's' || move == 'S') {
        move = 3;
    }
    random_ = (rand() % 3) + 1; //คอมสุ่ม
    if (random_ == 1){  // กำหนดค่าของคอม
        printf("My move is: rock\n" );
        }
    if (random_ == 2){
        printf("My move is: paper\n");
        }
    if (random_ == 3){
        printf("My move is: scissors\n");
        }

    
   
    if (move == 1 && random_ == 1){ //เปรียบเทียบกรณีเสมอ
        printf("It's a draw\n");
    }
    else if (move == 2 && random_ == 2){
        printf("It's a draw\n");
    }
    else if (move == 3 && random_ == 3){
        printf("It's a draw\n");
    }
    else if (move == 1 && random_ == 2){ // เปรียบเทียบกรณี คอมชนะ
        my_count++;
        printf("I won\n");
    }
    else if (move == 2 && random_ == 3){
        my_count++;
        printf("I won\n");
    }
    else if (move == 3 && random_ == 1){
        my_count++;
        printf("I won\n");
    }
    else if (move == 1 && random_ == 3){ //เปรียบเทียบ user ชนะ
        you_count++;
        printf("You won\n");
    }
    else if (move == 2 && random_ == 1){
        you_count++;
        printf("You won\n");
    }
    else if (move == 3 && random_ == 2){
        you_count++;
        printf("You won\n");
    }
    if(count<2){
    printf("---\n");
    count++;
    }
    if (you_count == 2){ // เกมหยุเมื่อมีผู้ชนะ 2/3 เซต
        break;
        printf("Congratulations,you are the winner!\n");
    }
    else if (my_count == 2){
        break;
        printf("Sorry,try again\n");

    }
}



    if (you_count == my_count){ // หคำแสดงเมื่อเล่นครบ 3 เซต
        printf("It's a draw!\n");
    }
    else if (you_count > my_count){
        printf("Congratulations,you are the winner!\n\a\a\a\a\a");
    }
    else if (you_count < my_count){
        printf("Sorry,try again\n");
    }
    return 0;

}


    
