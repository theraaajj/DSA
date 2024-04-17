#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};


void traversal(struct node* ptr){
    while(ptr!=NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}


int main(){
    struct node* head;
    struct node* second;
    struct node* third;

    // Allocates memory of nodes of linked lists in a heap!
    head = (struct node*) malloc (sizeof (struct node));
    second = (struct node*) malloc (sizeof (struct node));
    third = (struct node*) malloc (sizeof (struct node));

    // links 1st and 2nd node
    head->data = 7;
    head->next = second;

    // links 2nd and 3rd
    second->data = 11;
    second->next = third;

    // terminates the list at 3rd node
    third->data = 60;
    third->next = NULL;

    traversal(head);

    return 0;
}
