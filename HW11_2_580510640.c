/* suphanan mujarin
 * 5805510640
 * HW 11
 * Problem 1
 * 204112 Sec 003 */

#include "T112_HW11_2.h"

node_t* createNode(int value)
{
    node_t *newNode = (node_t*)malloc(sizeof(node_t));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

node_t *insertAtIndex(node_t *head, node_t *newNode, int index, int *success)
{
    if (head == NULL && (index != 0)){
        *success = 0;
        return head;
    }
    if (index < 0) {
        *success = 0;
        return head;
    }
    int c_ount = 1;
    node_t * curr = head;
    if (index == 0) {
        newNode->next = head;
        head = newNode;
        *success = 1;
        return head;
    }
    while ( (curr -> next != NULL) && (c_ount < index )) {
        c_ount += 1;
        curr = curr->next;
    }
    if (c_ount == index) {
        newNode->next = curr->next;
        curr->next = newNode;
        *success = 1;
    } else {
        *success = 0;
    }
    return head;
}

node_t *deleteAtIndex(node_t *head, int index, int *value, int *success)
{
    if (head == NULL) {
        *success = 0;
    }
    if (index < 0) {
        *success = 0;
    }
    node_t * curr = head;
    if (index == 0) {
        curr = head;
        *value = curr->value;
        head = head->next;
        free(curr);
        *success = 1;
        return head;
    } else {
        int c_ount = 1;
        while ( (curr -> next != NULL) && (c_ount < index )) {
            c_ount += 1;
            curr = curr->next;
        }
        node_t *temp;
        if ((c_ount == index) && (curr->next)) {
            temp = curr -> next;
            *value = temp->value;
            temp-> next = temp->next->next;
            free(temp);
            *success = 1;
            return head;
        } else {
            *success = 0;
            return head;
        }
    }

    return head;
}

int valueAtIndex(node_t *head, int index, int *success)
{
    int c_ount = 0;
    int result = 0;
    node_t * curr = head;
    if (head == NULL) {
        *success = 0;
        return head;

    }
    if (index < 0) {
        *success = 0;
        return head;

    } 
    if ((index == 0) && (head != NULL)){
        result =head->value;
        *success = 1;
        return result;
    }
    else {
        while ( (curr -> next != NULL) && (c_ount < index )) {
            c_ount += 1;
            curr = curr->next;
        }
        if (c_ount == index) {
            result = curr->value;
            *success = 1;
            //return result;
        } else {
            *success = 0;
        }
    }

    return result;
}

