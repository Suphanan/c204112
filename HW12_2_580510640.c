/* suphanan mujarin
 * 580510640
 * HW 12
 * Problem 2
 * 204112 Sec 00A */

#include "T112_HW12_2.h"
node_t *createList(node_t* head, int v)
{
    node_t *newNode = (node_t*)malloc(sizeof(node_t));
    newNode->value = v;
    newNode->next = NULL;
    if (head == NULL) {  //--begin add to tail
        return newNode;
    }
    node_t *n_node = head;
    if (n_node != NULL) {
        while (n_node->next != NULL) {
            n_node = n_node->next;
        }
        n_node->next = newNode;
    }
    return head;
}

node_t *reverseList(node_t *originalList)
{


    node_t *prev = NULL;
    node_t *next;

    while (originalList) {
        next = originalList->next;
        originalList->next = prev;
        prev = originalList;
        originalList = next;
    }
    originalList = prev;

    return originalList;
