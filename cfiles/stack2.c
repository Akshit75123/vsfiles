// implementation of stack using linked list

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//implementation starts here

//defining structure of linked list
struct node {
    int info;
    struct node *next;
};

int pop(struct node **s){
    int item;
    struct node *r;
    if(*s==NULL){
        printf("Stack underflow");
        return -1;
    }
    else{
        item=(*s)->info;
        r=*s;
        *s=r->next;
        free(r);
        return item;
    }
}

void removeStack(struct node **s){
    while (*s!=NULL)
    {
        /* code */
        pop(s);
    }
    
}



int peek(struct node **s){
    if(*s==NULL){
        printf("Stack is empty");
        return -1;
    }
    else
        return((*s)->info);

}

struct node* create_node(){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return n;
}

void push(struct node **s, int item){
    struct node *n;
    n=create_node();
    if (n!=NULL){
        n->info=item;
        n->next=*s;
        *s=n;
    }
}


//implemntation ends here
void main(){

    struct node *stack; 
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    printf(" %d ", pop(&stack));
    printf(" %d ", peek(&stack));
    removeStack(&stack) ;
    printf("The Stack is removed successfully");
}

//i have debugged this code using ChatGPT