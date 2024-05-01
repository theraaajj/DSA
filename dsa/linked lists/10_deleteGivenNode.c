//  Case 1 : Delete a node with a given index:
# include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

// traversal function.
void traversal(struct node* ptr){
    while(ptr!=NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}


// function for deleting node with a given value.
struct node * deleteFromBetween (struct node * head, int value){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    ptr = head;
    struct node* q = head->next;
    
    while(q->data != value && q->next!=NULL){
        ptr = ptr->next;
        q = q->next;
    }
    
    if(q->data == value){
        ptr->next = q->next;
        free(q);
    }
    return (head);
}


int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    // Allocates memory of nodes of linked lists in a heap!
    head = (struct node*) malloc (sizeof (struct node));
    second = (struct node*) malloc (sizeof (struct node));
    third = (struct node*) malloc (sizeof (struct node));
    fourth = (struct node*) malloc (sizeof (struct node));

    // links 1st and 2nd node
    head->data = 7;
    head->next = second;

    // links 2nd and 3rd
    second->data = 11;
    second->next = third;

    // links 3rd and 4th
    third->data = 60;
    third->next = fourth;

    // terminates the list at 4th node
    fourth -> data = 66;
    fourth -> next = NULL;

    head = deleteFromBetween(head, 66);         // ye function jo return krrha (head), usko head banana hai na
    traversal(head);

    return 0;
}


// did it myself again. bingooooo!!!