// Case 2 : Insertion in between of a linked list. O(n)

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

// function for insertion in between
struct node * insertInBetween (struct node * head, int data, int index){
        struct node * ptr = (struct node *) malloc (sizeof(struct node));
        struct node * p = head;
        int i=0;

        while ( i!= index-1){              // so that p reaches the node after which new node has to be added!
            p = p->next;
            i++;
        }
        ptr->data = data;
        ptr->next = p->next;
        p->next = ptr ;
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

    head = insertInBetween(head, 56, 2);        // ye function jo return krrha (head), usko head banana hai na
    traversal(head);

    return 0;
}