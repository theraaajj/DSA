// Circular Linked List.

#include <stdio.h>
#include <stdlib.h>

// defining the structure of linked list's node
struct node{
    int data;
    struct node* next;
};


// adding a node at head of a circular LL:
struct node* insertAtFirst(struct node*head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    
    struct node*p = head->next;
    while(p->next!=head){
        p = p->next;
    }
    // at this point p points to the last node of this circular ll.
    p->next = ptr;
    ptr->next = head;
    return ptr;
}


// traversal function.
void traversal(struct node* head){
    struct node* ptr = head;
    do{
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
    while(ptr!=head);
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
    fourth -> next = head;

    head = insertAtFirst(head, 80);
    traversal(head);

    return 0;
}


