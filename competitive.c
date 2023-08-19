#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;

void print(){
    struct Node* curr = head;

    while (curr != NULL)
    {
        printf("%d ", curr->value);
        curr = curr->next;
    }
    

}

void pushHead(int value){
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));

    node->value = value;
    node->next = head;

    head = node;    
}

void pushTail(int value){
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    struct Node* temp = head;

    node->value = value;
    node->next = NULL;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node; 
}



int main() {
    pushHead(8);
    pushHead(1);
    pushHead(2);
    pushTail(3);
    pushTail(7);
    pushHead(5);
    print();
    return 0;
}