/* 
Suphanan Mujarin
580510640
HW 01
Problem 2
204112 sec 003
*/

#include <stdio.h>


double pi(int n){
    int i,j; 
    int pi_ = 3; //defind pi_
    double down = 2.0; // start 2
    double keep = 0.0; 
    double temp = 1.0; 
    double result =0.0; 

    for(i=1;i <= n;i++){ //loop equa n

        for(j=1;j <= 3;j++){ // loop  3times
            temp = temp*down;
            //printf("%.1f\n",down);
            down++;
        }

        keep = (4 / temp);
        temp = 1;

        if (i%2 == 0) {   //put sign
            keep = (-1 *keep);
                
        }
        else {
            keep = (1 * keep);}
        result = result + keep; //keep in each term
        down--;  
    }
    result = result +pi_;  //sum all term and pi  
    return result;

}

int main() {
    int n;
    scanf("%d",&n); //recieve from input
    
    printf("%.10f\n",pi(n) ); //call function &print output
    
    return 0;
}
