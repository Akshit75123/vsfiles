#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *START = NULL;
struct node* CreateNode(){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
}

//inserting node at last
void insertNode(){
    struct node *temp, *t;
    temp=CreateNode();
    printf("Enter a number");
    scanf("%d", &temp->info);
    temp->link=NULL;
    
    if (START==NULL)
        START = temp;
    
    else{
        t=START; // 
        while (t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
}

//deleting first node
void deleteNode(){
    struct node *r;
    if (START==NULL)
        printf("List is empty");
    else{
        r=START;
        START=START->link;
        free(r); 
    }
}

void viewList(){
    struct node *t;
    t=START;
    if (START==NULL)
        printf("List is empty");
    else {
        t=START;
        while(t!=NULL){
            printf("%d\t", t->info);
            t=t->link;
        }
    }

}

int menu(){
    int ch;
    printf("\n1 Add value to the list");
    printf("\n2 Delete first value");
    printf("\n3 View List");
    printf("\n4 Exit");
    printf("\n\nEnter your choice");
    scanf("%d", &ch);
    return ch;
}

int main(){

    while(1){
        switch(menu()){
            case 1:
                insertNode();
                break;
            case 2:
                deleteNode();
                break;
            case 3:
                viewList();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice");
        }
        
    } 
    return 0;
}