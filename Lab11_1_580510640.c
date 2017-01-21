/* suphanan mujarin
 * 580510640
 * Lab 11
 * Problem 1
 * 204112 Sec 003 */

#include "T112_Lab11_1.h"

// function prototype

// function definition

void display_record(student_t rec)
{
    printf("%s ", rec.student_id);
    printf("%s %s\n", rec.first_name, rec.last_name);
}

int linear_search_recursive(int n, student_t student_records[], char key[])
{
    //base case
    if (n == 0) return NOT_FOUND;
    if (strcmp(student_records[0].student_id, key) == 0) {
        return 0;
    }
    int result = linear_search_recursive(n - 1, student_records + 1, key);
    if (result == NOT_FOUND) return NOT_FOUND;
    return result + 1;


}

void swap(student_t *a, student_t *b)
{
    student_t swap_;
    swap_ = *a;
    *a = *b;
    *b = swap_;
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