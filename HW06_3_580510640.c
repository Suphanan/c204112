/* 580510640
 * suphanan Mujarin
 * HW 06
 * Problem 
 * 204112 Sec 00A */

#include "T112_HW06_3.h"
#include <math.h>
char check_quadrant(double x,double y);



void count_segment(int n, double x[], double y[], double r[], int seg_count[])
{   
    int j =0;
    while (j < 4){
        seg_count[j]=0;
        j++;
    }
    int i=0;
    char a = '0';
    for (i=0; i < n;i++){
        a = check_quadrant(x[i],y[i]);
        double x_ = fabs(x[i]);
        double y_ = fabs(y[i]);
        double r_ = r[i];
        if (a == '1'){
            seg_count[0] ++;
            if (r_ - x_ > 0){
                seg_count[1]++;
            }
            if (r_ - y_ > 0){
                seg_count[3]++;
            }
            if (r_ - (sqrt((pow(x_,2))+(pow(y_,2)))) > 0){
                seg_count[2]++;
            }
        }
        if (a == '2'){
            seg_count[1] ++;
            if (r_ - x_ > 0){
                seg_count[0] ++;
            }
            if (r_ - y_ > 0){
                seg_count[2] ++;
            }
            if (r_ - (sqrt((pow(x_,2))+(pow(y_,2)))) > 0){
                seg_count[3] ++;
            }
        }
        if (a == '3'){
            seg_count[2] ++;
            if (r_ - x_ > 0){
                seg_count[3] ++;
            }
            if (r_ - y_ > 0){
                seg_count[1] ++;
            }
            if (r_ - (sqrt((pow(x_,2))+(pow(y_,2)))) > 0){
                seg_count[0] ++;
            }
        }
        if (a == '4'){
            seg_count[3] ++;
            if (r_ - x_ > 0){
                seg_count[2] ++;
            }
            if (r_ - y_ > 0){
                seg_count[0] ++;
            }
            if (r_ - (sqrt((pow(x_,2))+(pow(y_,2)))) > 0){
                seg_count[1] ++;
            }

        }
    }


}    
char check_quadrant(double x,double y)
{
    int i;
    char a;
    for (i=0;i<2;i++){

        if ((x >= 0) && (y >= 0)){
            a = '1';
        }
        else if ((x < 0) && (y >= 0)){
            a = '2';
        }
        else if ((x < 0) && (y < 0)){
            a = '3';
        }
        else if ((x >= 0) && (y <= 0)){
            a = '4';
        }
    }
    return a;
}

