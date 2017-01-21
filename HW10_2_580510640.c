/* suphanan mujarin
 * 580510640
 * HW 10
 * Problem 1
 * 204112 Sec 003 */
#include "T112_HW10_2.h"
#include "string.h"

// addition function prototype
void swap_(student_score_t *first, student_score_t *second);
unsigned short readAnswerkey(char key_file_name[]);
int readAndCalcScore(student_score_t ansArr[], unsigned short answerKey);
int writeToFile(student_score_t ansArr[], int num_record, char out_file_name[]);

// function definition
void swap_(student_score_t *first, student_score_t *second)
{
    student_score_t swap_;
    swap_ = *first;
    *first = *second;
    *second = swap_;
}


unsigned short readAnswerkey(char key_file_name[])
{
    unsigned short answerKey = 0;
    FILE *inread =fopen(key_file_name,"r");
    if ((inread = (fopen(key_file_name,"r"))) != NULL)
    {
        fscanf(inread,"%u",&answerKey);
    }
    return answerKey;
    fclose(inread);
}

int readAndCalcScore(student_score_t ansArr[], unsigned short answerKey)
{
    int num_record = 1;
    int i = 0;
    int index = 0;
    int keep = 0;
    unsigned short s_temp;
    scanf("%d", &num_record);
    if (num_record > 0) {
        for (i = 0; i < num_record; i++) {
            keep = 0;
            scanf("%s", &ansArr[i].student_id);
            scanf("%s", &ansArr[i].answer);
            for (index = 0; index < NUM_QUESTION; index++) {
                s_temp = answerKey;
                s_temp = s_temp << index;
                s_temp = s_temp >> NUM_QUESTION - 1;
                if (ansArr[i].answer[index] - '0' == s_temp)
                    keep += 1;
            }
            ansArr[i].score = keep;
        }
    }
    if (num_record == 0) {
        return 0;
    }
    return num_record;
}

int writeToFile(student_score_t ansArr[], int num_record, char out_file_name[])
{

    int success = 1;
    int i = 0;
    int j = 0;

    for (i = 0; i < num_record; i++) {
        j = i;
        if (j > 0) {
            while (strcmp(ansArr[j].student_id , ansArr[j - 1].student_id) < 0 ) {
                swap_(&ansArr[j].student_id, ansArr[j - 1].student_id);
                j -= 1;
            }
        }
    }
    FILE *w_out = fopen(out_file_name, "w");
    if (num_record > 0) {
        for (i = 0; i < num_record; i++) {
            fprintf(w_out, "%s with answer %s, got %d points.\n", ansArr[i].student_id, ansArr[i].answer, ansArr[i].score );
        }
        fclose(w_out);
        return success;
    } else
        return 0;
}




