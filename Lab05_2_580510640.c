/* 
Suphanan Mujarin
580510640
Lab Problem 1
204112 sec 003
*/

#include <stdio.h>

int characters_();
int main(){
    while(characters_() == 1); //recieve word many times
    return 0;


}
int characters_() { 
    int grade;
    double ans;
    double result =0.0;
    double avg =0.0;
    double count=0.0;

    while ((grade = getchar()) != '\n'){ //recieve input for each alpha
        if (grade == EOF){ 
            return 0;

        }if (grade == 'A'){ //กำหนดค่าของแต่ละเรกดที่จะนำไปคิด
            ans = 4.0;
        }if(grade == 'B'){
            ans = 3.0;
        }if(grade == 'C'){
            ans = 2.0;
        }if(grade == 'D'){
            ans = 1.0;

        }if(grade == 'F'){
            ans = 0.0;  

        }if (grade=='A'|| grade== 'B'|| grade == 'C'|| grade == 'D'|| grade =='F'){ //ถ้าใช่ A B C D F 5ถึงจะนับ
            count ++;
            ans = ans*3; //คูรหน่วยกิต
            result = result + ans; // บวกรวมหน่วยกิต
            
        }
        
    }    
    count =count*3; //คูรหน่วตกิตตอนหาร
    avg = result / count; //หาเฉลี่ย

    printf("%.2f\n",avg );
    count = 0;
    avg = 0;
    result = 0;

    return 1;
}