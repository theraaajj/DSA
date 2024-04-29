// Insertion after a node. 
// here a pointer is always given. in the form of struct node*

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


// function for insertion after a node.
struct node * insertAfterNode (struct node * head, struct node * prevNode, int data){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
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

    head = insertAfterNode(head, third, 8834);         // head dete hain just for simplicity, warna complexity aajta hai.. if not hata kar dekh lo, toh function bhi kya return karega???
    traversal(head);

    return 0;
}