/* Suphanan Mujarin
 * 580510640
 * HW 07
 * Problem 1
 * 204112 Sec 003 */


#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u",&n);//รับค่าแบบunsign
    if ((n - 1 & n) == 0){ //เขียน input ในรูปยกกำลังได้ ให้ 1
        printf("1");
    }
    else{ //ไม่ได้ปริ้น 0
        printf("0");
    } 
    return 0; 
}
