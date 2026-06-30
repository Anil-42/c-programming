#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char *data;
    struct node *nextNode;
}*head=NULL;

void insertAtBegin(char *name){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)return;

    newNode->data = name;
    newNode->nextNode = NULL;
    if(head == NULL){
        head=newNode;
    }
    else{
        newNode->nextNode = head;
        head = newNode;
    }
}

void deleteAtBegin(){
    
    if(head == NULL){
        return;
    }
    else{
        head=head->nextNode;
    }
}


void display(){
    struct node *lastNode = head;
    while(lastNode!=NULL){
        if(lastNode->nextNode==NULL){
            printf("%s",lastNode->data);
        }
        else{
            printf("%s->",lastNode->data);
        }
        lastNode=lastNode->nextNode;
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char *name = (char*)malloc(100+1);
        scanf("%s",name);
        insertAtBegin(name);
    }
    printf("after insertion:\n");
    display();
    deleteAtBegin();
    printf("\nafter deleting at begin:\n");
    display();
    return 0;
}