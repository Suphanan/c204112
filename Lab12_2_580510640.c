/* suphanan mujarin
 * 580510640
 * Lab 12
 * Problem 2
 * 204112 Sec 003 */

#include "T112_Lab12_2.h"



node_t *mergeListRec(node_t* head1, node_t* head2)
{
    node_t *curr = NULL;
    if (!head1){
        return head2;
    }
    if (!head2){
        return head1;
    }
    if ( head1-> value > head2-> value){
        curr =head1;
        curr->next = mergeListRec(head1-> next,head2);
    }
    else{
        curr =head2;
        curr->next = mergeListRec(head1,head2->next);
    }
    return curr;

   
}