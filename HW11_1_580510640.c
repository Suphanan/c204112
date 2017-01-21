/* suphanan mujarin
 * 5805510640
 * HW 11
 * Problem 1
 * 204112 Sec 003 */

#include "T112_HW11_1.h"

node_t* createNode(int v)
{
    node_t *newNode = (node_t*)malloc(sizeof(node_t));
    newNode->value = v;
    newNode->next = NULL;
    return newNode;


    //return NULL;
}

node_t *deleteFromList(node_t *head, int key, int *success)
{
    int check = 0;
    node_t * tp = head;
    node_t * curr = head;
    while ( tp != NULL) {
        if (tp->value == key) {
            check = 1;
        }
        tp = tp->next;
    }
    if (check == 0) {
        *success = 0;
        return head;
    }
    if (key == head->value ) {
        node_t * temp = curr;
        curr = curr->next;
        free(temp);
        *success = 1;
        head = curr;
        return head;
    } else {
        while ((curr->next != NULL) && (curr->next->value < key)) {
            curr = curr->next;
        }
        node_t * temp;
        temp = curr->next;
        curr->next = temp->next;
        free(temp);
        *success = 1;
        return head;
    }
    // if (head == NULL || head->value > key){
    //     newNode->next = head;
    //     head = newNode;
    //     return head;

    // if (curr->value == key){
    //     node_t * temp = curr;
    //     curr = curr->next;
    //     free(temp);
    // }
    // while ((curr->next != NULL) && (curr->next->value < key)) {
    //     curr = curr-> next;
    // }
    // if (curr->next->value == key) {
    //     node_t * temp = curr->next;
    //     curr = curr->next ->next;
    //     free(temp);
    // }

    return NULL;
}

node_t *insertInOrder(node_t *head, node_t *newNode)
{
    node_t *curr = head;
    if (head == NULL || head->value > newNode->value) {
        newNode->next = head;
        head = newNode;
        return head;
    } else {
        while ((curr -> next != NULL) && (curr-> next->value < newNode-> value))
            curr = curr ->next;
        newNode->next = curr->next;
        curr->next = newNode;
        //curr->next = newNode;
    }
    return head;

}













//     while((curr->next != NULL) &&  (curr->next->value < newNode->value)){
//         curr = curr->next;
//     }
//     newNode->next = curr->next;
//     curr->next = newNode;
// }