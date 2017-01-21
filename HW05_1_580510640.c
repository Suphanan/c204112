/* suphanan mujarin
 * 580510640
 * HW 05
 * Problem 1
 * 204112 Sec 003 */

#include "T112_HW05_1.h"


void show_histogram(int cnt_A, int cnt_B,
                    int cnt_C, int cnt_D, int cnt_F)
{   
    int i =0;
    int keep_A = cnt_A; //definf new variable to keep each count for devide
    keep_A = keep_A / UNIT; //devide 2 coz' UNIT mean 2 people in one (x)
    printf("A |[");
    for(i =0;i < keep_A;i++){  //loop print 'x' >>histogram
        printf("X");
    }
    printf("] (%d)\n",cnt_A); //print how many people in this grade
    //------------
    int keep_B = cnt_B;
    keep_B = keep_B / UNIT;
    printf("B |[");
    for(i =0;i < keep_B;i++){
        printf("X");
    }
    printf("] (%d)\n",cnt_B);
    //------------
    int keep_C = cnt_C;
    keep_C = keep_C / UNIT;
    printf("C |[");
    for(i =0;i < keep_C;i++){
        printf("X");
    }
    printf("] (%d)\n",cnt_C);
    //------------
    int keep_D = cnt_D;
    keep_D = keep_D / UNIT;
    printf("D |[");
    for(i =0;i < keep_D;i++){
        printf("X");
    }
    printf("] (%d)\n",cnt_D);
    //------------
    int keep_F = cnt_F;
    keep_F = keep_F / UNIT;
    printf("F |[");
    for(i =0;i < keep_F;i++){
        printf("X");
    }
    printf("] (%d)\n",cnt_F);

   
}

void frequency_cnt(int* cnt_A, int* cnt_B,
                   int* cnt_C, int* cnt_D, int *cnt_F)
{
    double score_;
    while(1 == scanf("%lf", &score_)) //recieve input from user and keep in score
    {
        // printf("score  %f \n", score_);
        if (score_ >=  A_CUTOFF){  //compare about grade(#already defind eg. A_CUTOFF 80 )
            *cnt_A +=1;  //count how many people in this grade
        }
        else if (score_ >=  B_CUTOFF){
            *cnt_B +=1;
        }
        else if (score_ >=  C_CUTOFF){
            *cnt_C +=1;
        }
        else if (score_ >=  D_CUTOFF){
            *cnt_D +=1;
        }
        else if (score_ <  D_CUTOFF){
            *cnt_F +=1;
        }
    }
}

