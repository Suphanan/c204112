/* suphanan mujarin
 * 580510640
 * Lab 12
 * Problem 1
 * 204112 Sec 003 */

#include "T112_Lab12_1.h"
 
 node_t *mergeList(node_t* head1, node_t* head2) {
    node_t *result  = NULL;
    node_t *tail =NULL;
    //while (head1 && head2) -SAME BELOW-
    if (!head1) return head2;
    if (!head2) return head1;
    while((head1 != NULL) && (head2 != NULL)){
        if((head1->value) > (head2 ->value)){
            if (tail != NULL){
                tail->next = head1; //เอามาต่อหาง
            }
            tail=head1;
            if (result == NULL){
                result =head1;
            }
            head1 = head1->next;
        }
        else{
            if (tail != NULL){
                tail->next = head2;
            }
            tail=head2;
            if (result == NULL){
                result = head2;
            }
            head2 = head2->next;
        }
        if (head1){
            tail->next =head1;
        }
        if(head2){
           tail->next =head2; 
        }
    }
    return result;
}


