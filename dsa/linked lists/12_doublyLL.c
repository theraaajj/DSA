#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

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
    head->prev = NULL;

    // links 2nd with 3rd & 1st
    second->data = 11;
    second->next = third;
    second->prev = head;

    // links 3rd with 4th & 2nd
    third->data = 60;
    third->next = fourth;
    third->prev = second;

    // links 4th with 3rd, & terminates the list.
    fourth->data = 78;
    fourth->next = NULL;
    fourth->prev = third;

    return 0;
}