/* 
Suphanan Mujarin
580510640
Lab 01
Problem 1
204112 sec 003
*/

#include <stdio.h>

int main() {
    printf("Input x: ");
    int x;
    scanf("%d",&x);
    int i,j;
    int n = x;
    for(i = 1;i <= x;i++){
        for(j = 1;j <= x;j++){
            if (n == j){
                printf("%d ",j);
                n-=1;
            }  
            else if (i == j){
                printf("%d ",j);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}