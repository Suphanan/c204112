/* Suphanan Mujarin
 * 580510640
 * HW 07
 * Problem 2
 * 204112 Sec 003 */


#include <stdio.h>
void num_(); //ประกาศฟังก์ชัน
void IP_();

int main() {
    unsigned n;
    scanf("%d",&n); //สแกนรับว่ามีรืยีะ เทาไหร่
    int i;
    int answer;
    for(i=0;i<n;i++){
        scanf("%u", &answer); //รับอีกทีเพื่ออทำไปแปลง ว่ารับมาเป็น 1 หรือ 2
        if (answer == 1){
        num_();
        }
        if (answer == 2){
        IP_();

        }
    }
    return 0;

}


void IP_(){ //แปลงเลขเป็น ไอพี
    unsigned int n;
    int num1,num2,num3,num4;
    scanf("%u", &n);
    num1 = n >> 24 & 255;
    num2 = n >> 16 & 255;
    num3 = n >> 8 & 255;
    num4 = n >> 0 & 255;
    printf("%u.%u.%u.%u\n",num1,num2,num3,num4); 
    //return 0;
}

void num_(){ //แปลง ไอพี่ เป็นน เลข
    unsigned int num1,num2,num3,num4;
    int n;
    scanf("%u.%u.%u.%u", &num1, &num2, &num3, &num4);
    //printf("%u:%u:%u:%u\n",num1,num2,num3,num4 );
    n = num1<<24|num2<<16|num3<<8|num4 <<0;
    printf("%u\n",n );
    //return 0;
    }



