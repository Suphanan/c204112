/* suphanan mujarin
 * 580510640
 * HW 05
 * Problem 1
 * 204112 Sec 003 */

#include "T112_Lab09_1.h"


int read_student_file(char id[][ID_LEN + 1], int score1[], int score2[], int score3[], char in_file_name[])
{
    FILE *input_file = fopen(in_file_name, "r");

    if (input_file) {
    int n;
    fscanf(input_file, "%d", &n);
    int i;

    for (i = 0; i < n; i++) {
        fscanf(input_file, "%s %d %d %d", id[i], &score1[i], &score2[i], &score3[i]);
        //printf("%s %d %d %d\n", id[i], score1[i], score2[i], score3[i] );
        }
    fclose(input_file);
    return n;
    }


    else{
        return 0;
    }
}


int calculate_score(int n, char id[][ID_LEN + 1], int score1[], int score2[], int score3[], float average_score[])
{
    if (n > 0) {
        int i = 0, sum = 0;
        for (i = 0; i < n; i++) {
            sum = score1[i] + score2[i] + score3[i];
            average_score[i] = sum / 3.0;
        }
        return 1;
    }
    else{
        return 0;
    }

}


int write_average_file(int n, char id[][ID_LEN + 1], float average_score[], char out_file_name[])
{
    FILE *out_file = fopen(out_file_name, "w");
    if(n >0){
        int i;
        for (i=0;i<n;i++){
        fprintf(out_file,"%s %.2f\n",id[i],average_score[i]);
        }
    fclose(out_file);
        return 1;
    } 
    else{
        return 0;
    }
}

