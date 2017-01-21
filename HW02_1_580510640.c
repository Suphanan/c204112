/* Suphanan Mujarin
 * 580510640
 * HW 02
 * Problem 1
 * 204112 Sec 003 */

#include "T112_HW02_1.h"



int longest_digit_run(int num)
{
    int keep = num % 10; // เอาตัวท้าย
    num = num / 10; //เพื่อเก็บตัวหน้าที่เหลือ
    int result_=1; //กำหดค่าเป็น 1เพราะ เจอก็นับ 1เริ่มเลย
    int result = result_; //กำหนดค่าของreal ans
    int number = keep;//ใช้เปรียบเทียบ
    //int result = 0;

    while (num != 0){ //ลูปเมื่อ ไม่เท่ากับ0
        keep = num % 10;
        num = num / 10;
        if (number == keep){ // ถ้าเลขเหมือนกันให้นับเพิ่ม
            result_=result_+1;
        }
        if (result_ >= result){ //ถ้าตอบที่นับมามีค่าน้อยกว่าให้ result =real ans
            result=result_;
        }
        if (number != keep){ //ถ้าเลไม่เหมือนกันให้ เริ่มตั้งค่านับ 1ใหม่
            result_=1;
        }
        number=keep;// set เพื่อนำค่าไปเปรีบยเทียบต่อไป

    }
    if (result_>result){
        result=result_;
    }



    return result;
}