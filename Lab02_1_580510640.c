/* 
suphanan_mujarin
580510640
Lab 02
problem 1
204112 sec 003


*/

#include <stdio.h>

int main() {
//    เริ่มต้น
//1. ท าหน้าจอให้พร้อมส าหรับการแสดงผล (ลบข้อความเดิมที่ปรากฏบนหน้าจอ)
    printf("\e[1;1H\e[2J");
//2. แสดงข้อความ เพื่อบอกให้ผู้ใช้ป้อนค่าความยาวของรัศมี
    printf("Please input the radius: ");
//3. รับค่า รัศมี
    double r;
    scanf("%lf", &r);
//4. ค านวณหา ความยาวของเส้นรอบวง พื้นที่ของวงกลมและปริมาตรของทรงกลมที่มีรัศมี ตามที่ผู้ใช้
//ป้อน ตามสูตรต่อไปนี้ (ก าหนดให้ Pi = 22/7)
    double pi_ = 22.0 / 7.0;
//ความยาวของเส้นรอบวง = 2 x Pi x รัศมี
    double dis_cir = 2.0 * pi_ * r;
//พื้นที่ของวงกลม = Pi x รัศมี x รัศมี
    double area_cir = pi_ * r * r;
//ปริมาตรของทรงกลม = 4/3 x Pi x รัศมี x รัศมี x รัศมี
    double volume_cir = ((4.0/3.0) * pi_ * r * r * r );
//5. แสดงผลลัพธ์ตามรูปแบบต่อไปนี้ (ทศนิยม 4 ต าแหน่ง)
    printf("The perimeter of a circle with radius  %.4f  is  %.4f, its area is around %.4f\n" ,r,dis_cir,area_cir);
    printf("The volume of this sphere is %.4f\n", volume_cir);// ปริมาตรของทรงกลม
//จบงาน
    return 0;
}
