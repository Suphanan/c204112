/* suphanan mujarin
 * 580510640
 * HW 10
 * Problem 3
 * 204112 Sec 003 */

#include "T112_HW10_3.h"
#include <stdlib.h>
// struct depent_all all;
// {
//     char dept_id;
//     float ave;
// };

// addition function prototype
int readStudentFile(student_t student_record[], char in_file_name[]);
int calculateAndWrite(student_t student_record[], int num_record, char out_file_name[]);
void swap(student_t *frist, student_t *second);

// function definition


int readStudentFile(student_t student_record[], char in_file_name[])
{
    int num_record = 1;
    FILE *read = fopen(in_file_name, "r");
    if ((read = (fopen(in_file_name, "r"))) != NULL) {
        fscanf(read, "%d", &num_record);
        int i;
        for (i = 0; i < num_record; i++) {
            fscanf(read, "%s %s %s %s %f", &student_record[i].student_id, &student_record[i].dept_id, &student_record[i].first_name, &student_record[i].last_name, &student_record[i].gpa);
        }
        fclose(read);
        return num_record;
    } else {
        return 0;
    }
}

int calculateAndWrite(student_t student_record[], int num_record, char out_file_name[])
{
    int success = 1;
    int index = 0;
    int j = 0;

    if (num_record == 0)
        success = 0;
    if (num_record > 0) {
        for (index = 0; index < num_record; index++) {
            j = index;
            while ( (j > 0) && strcmp(student_record[j].dept_id , student_record[j - 1].dept_id) < 0) {
                swap(&student_record[j], &student_record[j - 1]);
                j -= 1;
            }
        }
    }

    int c_dept = 0;
    int keep ;
    int d[11];
    float d_score[11][1];
    d[0] = atoi(student_record[0].dept_id);
    float temp = 0;
    float count_ = 0;
    index = 0;
    while (index < num_record) {
        if (atoi(student_record[index].dept_id) != d[c_dept] ) {

            d_score[c_dept][0] = d_score[c_dept][0] / count_;
            count_ = 1;
            c_dept += 1;
            d[c_dept] = atoi(student_record[index].dept_id);
            temp = student_record[index].gpa;
            d_score[c_dept][0] = temp;

        }
        if (atoi(student_record[index].dept_id) == d[c_dept] ) {
            count_ += 1;
            temp = temp + student_record[index].gpa;
            d_score[c_dept][0] = temp ;
        }
        index += 1;
    }
    d_score[c_dept][0] = d_score[c_dept][0] / count_;
    int new_c = 1;
    int c_student[c_dept];
    int keep_std[num_record];
    c_student[0] = 0;
    keep_std[0] = 0;
    j = 0;
    for (index = 0; index < num_record; index++) {

        if (d[j] == atoi(student_record[index].dept_id)) {
            keep_std[j]++;
            if (student_record[index].gpa < d_score[j][0]) {
                c_student[j]++;
            }

        } else {
            new_c += 1;
            j += 1;
            c_student[j] = 0;
            if (d[j] == atoi(student_record[index].dept_id)) {
                keep_std[j]++;
                if (student_record[index].gpa < d_score[j][0]) {
                    c_student[j]++;
                }
            }
            keep_std[j] = 1;
        }
    }
    FILE *out = fopen(out_file_name, "w");
    {
        float sum = 0.0;
        float temp_m = 0.0;
        fprintf(out, "%d\n", new_c );
        for (index = 0 ; index <= c_dept; index++) {
            temp_m = keep_std[index];
            sum = (c_student[index] / temp_m) * pow(10, 2);
            fprintf(out, "%.2d %.2f %d %.2f %%\n", d[index], d_score[index][0], c_student[index], sum);
        }
    }
    fclose(out);

    return success;
}

void swap(student_t *frist, student_t *second)
{
    student_t temp;
    temp = *frist;
    *frist = *second;
    *second = temp;

}

void insertion_sort(int n, student_t student_records[])
{
    int i = 0;
    int j = 0;
    for ( i = 1; i < n; i++) {
        j = i;
        while ((j > 0) && strcmp(student_records[j].first_name, student_records[j - 1].first_name) <  0) {
            swap(&student_records[j], &student_records[j - 1]);
            j -= 1;
        }
    }
}