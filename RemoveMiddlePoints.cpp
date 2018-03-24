#include<iostream>
#include<stdio.h>
using namespace std;

struct Node
{
    int x, y;
    struct Node *next;
};

/* Function to insert a node at the beginning */
void push(struct Node ** head_ref, int x,int y)
{
    struct Node* new_node = new Node();
    new_node->x  = x;
    new_node->y  = y;
    new_node->next = (*head_ref);
    (*head_ref)  = new_node;
}

/* Utility function to print a singly linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("(%d,%d)-> ", temp->x,temp->y);
        temp = temp->next;
    }
    printf("\n");

}

// Utility function to remove Next from linked list
// and link nodes after it to head
void deleteNode(struct Node *head, struct Node *Next)
{
    head->next = Next->next;
    Next->next = NULL;
    delete Next;
}

// This function deletes middle nodes in a sequence of
// horizontal and vertical line segments represented by
// linked list.
void deleteMiddle(struct Node **head)
{
    // If only one node or no node...Return back
    if (*head==NULL || (*head)->next ==NULL || (*head)->next->next==NULL)
        return;

    struct Node* curr = *head;
    struct Node *temp = curr->next ;

    // Check if this is a vertical line or horizontal line
    while(curr->next!=NULL || temp->next!=NULL){
        if(temp->next->x == curr->x || temp->next->y == curr->y){
            curr->next=temp->next;
            delete temp;
            temp=curr->next;
        }
        else{
            curr=temp;
            temp=temp->next;
        }
    }
}

// Driver program to tsst above functions
int main()
{
    struct Node *head = NULL;

    push(&head, 40,5);
    push(&head, 20,5);
    push(&head, 10,5);
    push(&head, 10,8);
    push(&head, 10,10);
    push(&head, 3,10);
    push(&head, 1,10);
    push(&head, 0,10);
    printf("Given Linked List: \n");
    printList(head);

    deleteMiddle(&head);
    printf("Modified Linked List: \n");
    printList(head);
    return 0;
}
