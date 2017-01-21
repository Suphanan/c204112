/* Suphanan Mujarin
 * 580510640
 * HW 03
 * Problem 2
 * 204112 Sec 003 */

#include "T112_HW03_2.h"

int to_bin(int dec) // comverse decimal to binary
{
    if (dec == 0){
        return 0;
    }
    int keep;
    int result = 0;
    int i = 0;
    while (dec > 0){
        keep = dec % 2;
        dec = dec / 2;
        result = result +(keep * (pow(10,i)));
        i++;
    }
    return result;
}


int find_nth_term(int n) 
{
    int keep = 0;
    int begin = 0;
    int answer = 0;  //ชุดความสมัพันธ์มาจาก 2^n eg 2^1 = มี 2 ตัว 2^4 =มี 16ตัว
    if (n < 3){ 
        begin = 2 - n; 
        keep = to_bin(begin);
        answer = 4 - keep; // ทำให้อยู่ในรูป เระบบ 3กับ4
    }
    else if (n > 2 && n < 7){
        begin = 6 - n;
        keep = to_bin(begin);
        //printf("I\n" );
        answer = 44 - keep;
    }
    else if (n > 6 && n < 15){
        begin = 14 - n;  
        keep = to_bin(begin);
        //printf("j\n" );
        answer = 444 - keep;
    }
    else if (n > 14 && n < 31){
        begin = 30 - n; 
        keep = to_bin(begin);
        //printf("k\n" );
        answer = 4444 - keep;
    }
    else if (n > 30 && n < 63){
        begin = 62 - n; 
        keep = to_bin(begin);
        //printf("m\n" );
        answer = 44444 - keep;
    }
    else if (n > 61 && n < 127){
        begin = 126 - n; 
        keep = to_bin(begin);
        //printf("n\n" );
        answer = 444444 - keep;
    }
    else if (n > 127 && n < 255){
        begin = 254 - n; 
        keep = to_bin(begin);
        //ntf("o\n" );
        answer = 4444444 - keep;
    }
    else if (n > 255 && n < 511){
        begin = 510 - n; 
        keep = to_bin(begin);
        //printf("p\n" );
        answer = 44444444 - keep;
    }
    else if (n > 511 && n < 1023){
        begin = 1022 - n; 
        keep = to_bin(begin);
        //printf("%d\n",keep );
        answer = 444444444 - keep;
        //printf("%d\n",answer );
    }

    return answer;
}
//หาช่วงดู 2^ i ห
///ถ้ารับอินพุดมา ให้เอาเลขนั้นไปลบกับความสัมพันะ์ของชวง แล้วจะได้เลขมาเก็บไว้ใน a แล้วนำa แปลงเป็นbase2 แล้วเอาที่แปลงมาลบกับเลขตัวสุดท้ายที่อยู่ในช่วงนั้นๆ