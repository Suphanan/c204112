/* 
Suphanan Mujarin
580510640
HW 04
Problem 1
204112 sec 003
*/

#include "T112_HW04_3.h"


void pig_latin() //แปลงเป็นpig latin

{   
    char find_w;
    char back;
    while (find_w != EOF){

        find_w=skip_non_word();//เก็บอักษรตัวแรกที่พบ
        if (find_w == EOF){
            break;
        }
        if (is_vowel(find_w)){ //เอาอักษรตัวแรกไปเช็ตเป็นสระหรือไหม ถ้าใชา่ไม่ทำอะไร
            putchar(find_w);
            back=read_word();
        }
        else{
            back=read_word(); //ถ้าไม่เอาตัวถัดไปขึ้นมาแล้วเอาตัวแรกมาต่อแล้วเอา ay 
            putchar(find_w);
            printf("ay");
            
}
    putchar(back); //ใส่เครื่องหมายพิเศษ    
    }
}

char skip_non_word() // คืนค่าอกขระ 
{  
    char char_;
    while ((char_ =getchar()) != EOF){
        if (isalpha(char_)){
           return char_;
        }
        else{
            putchar(char_);
          
        }
        
    }
}

char read_word() //คืนค่าเครื่องหมายพิเศษ
{   
    char char_;
    while ((char_ =getchar()) != EOF){
        if(isalpha(char_)){
            putchar(char_);
        }
        else{
            break;
        }
    }
    return char_;
}

int is_vowel(char ch) //check vovel
{   
    ch =tolower(ch);
    if ( ch == 'a' || ch == 'e' ||ch == 'i'|| ch == 'o'|| ch == 'u'){
        return 1;
    }
    return 0;
}
