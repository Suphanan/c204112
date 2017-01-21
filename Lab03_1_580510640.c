/* Suphanan Mujarin
 * 580510640
 * HW 02
 * Problem 1
 * 204112 Sec 003 */
#include <stdio.h>
#include <math.h>

int main() { //cube root
    double a;
    scanf("%lf",&a);
    double sign = a / fabs(a); //keep sign 
    a = fabs(a); 
    double low = 0;
    double high = a;
    double x =a;
    while (fabs((pow(x,3)) - a) > (pow(10,-10))){ //ทำเมื่อ (x^3)-a น้อยกว่า 10^-10
        x =(low + high) /2; 
        if ((pow(x,3)) > a){ // ถ้า x^3 มากกว่า a
            high = x; //ให้ high =a
        }
        else{
        low =x; //หรือน้อยกว่า low =a
            
        }
    
    }
    x = x * sign; // คิดเครื่องหมาย
    printf("%f\n", x);

    return 0;
}
