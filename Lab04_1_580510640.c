/* 
Suphanan Mujarin
580510640
Lab 04
Problem 1
204112 sec 003
*/

#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
int is_prime(int n)
{
    int j, stop = (int) sqrt((double) n);
    for (j = 2; j <= stop; j += 1)
        if (n % j == 0 )
            return FALSE; /* A divisor found, not prime */
    return TRUE; /* It’s prime if we fall thru the loop above */
}

int main()
{
    int k, m, n, p;
    printf("Please enter the range of integers to find prime numbers..\n");
    printf(" start from : "); scanf("%d",&m);
    printf(" to : "); scanf("%d",&n);
    printf("\nThe prime numbers in the specified range are : \n");
    for (p = 0, k = m; k <= n; k += 1) {
        if (is_prime(k)) {
            /* call is_prime() to check if k is a prime number
            * or not */
            printf("%-10d", k); /* print a prime number */
            p++;
            if (p % 5 == 0) {
                putchar('\n'); /* Line feed, if current line reaches the
 * limit of 5 prime number */
            }
        }
    }
    return 0;
}