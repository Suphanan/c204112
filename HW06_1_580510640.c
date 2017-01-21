/* Suphanan Mujarin
 * 580510640
 * HW 06
 * Problem 2
 * 204112 Sec 003 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    char num[47];
    int n[36]={0};
    int int_ =0;
    int i=0;

    scanf("%s",&num);
    int_ =strlen(num);
    int keep = 35;
    for (i = int_-1; i>=0;i--){
        if (isdigit(num[i]))
        n[keep--]= num[i]-'0';
    }
    scanf("%s",num);
    int_ =strlen(num);
    keep = 35;
    for (i = int_-1; i>=0;i--){
        if (isdigit(num[i]))
            n[keep]+= num[i]-'0';
            //printf("%d\n",n[i]);
            if (n[keep] >= 10){
                n[keep-1] = n[keep-1]+1;
                //n[keep-1]=n[keep]/10;
                n[keep] = n[keep] % 10;

            }
        keep--;
    }
    
    int c=0;
    for (i = 0; i<36;i++){
        if (n[i] == 0 && c != 1 ){
            continue;
        }
        else{
            c=1;
            printf("%d", n[i]);
        }
    
    }

    printf("\n");
    int d=0;
    int count=0;
    for (i = 0; i<36;i++){
        if (n[i] == 0 && d != 1 ){
            continue;
        }
        else{
            d=1;
            count++;
        }
    
    }
    int new_l=count;
    printf("%d\n",new_l );

    // int k=0;
    // int result=0;
    // while( new_l >= 0){
    //     result =  (n[k]/ pow(10,new_l)) %10;
    //     k++;
    
    //     printf("%d",result);
    //     if (new_l%3==0 && new_l != 0){
    //         printf(",");
    //     }
    //     new_l-=1;
    //     if (new_l == -1){
    //         printf("");
    //     }
    }    
    
    // def comma_separated(num, digit=3): #digit defult=3
    // log = math.floor(math.log10(num) + 1) #หาหลัก
    // #print(log)
    // log = log - 1 
    // while log>=0:
    //     result = (num // 10**log) % 10
    //     print(result, end="")
    //     if log%digit==0 and log != 0:
    //         print(",",end="") 
    //     log = log -1
    // if log == -1:
    //     print("")


    return 0;
}