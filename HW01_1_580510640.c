/* 
Suphanan Mujarin
580510640
HW 01
Problem 1
204112 sec 003
*/

#include <stdio.h>
double max_ab(double a,double b){
    double max_;
    if (a > b){
        max_ = a;
    }
    else{
        max_ = b;
    }
    return max_;}

int main() {
    int n;
    double k_score,avg;
    printf("Total students: ");
    scanf("%d",&n);

    double max_=0;
    double run=-1;
    double sum=0;

    if (n<=0){
        printf("---\n");
        printf("Max score is: None\n");
        printf("Runner up is: None\n");
        printf("Average is: None\n");
    }else{
        printf("Enter score:\n");
        int i;
        for(i=1;i<=n;i=i+1){
        scanf("%lf",&k_score);
            if (k_score > max_){
                run = max_;
            }
            else if(k_score < max_ && k_score > run){
                run = k_score;
            }
            max_ = max_ab(max_,k_score);
            sum = sum+ k_score;
        }
    }
        avg=sum/n;
        printf("---\n");
        printf("Max score is: %.2f \n",max_ );
        if (run <= 0){
            printf("Runner up is: None\n");
        }
        else{
            printf("Runner up is: %.2f\n",run );
        }
        printf("Average is: %.2f\n",avg);




    return 0;
}