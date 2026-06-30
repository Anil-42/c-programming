#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char *data;
    struct node *nextNode;
}*head=NULL;

void insertAtEnd(char *name){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)return;

    newNode->data = name;
    newNode->nextNode = NULL;

    if(head == NULL){
        head=newNode;
    }
    else{
        struct node *lastNode = head;
        while(lastNode->nextNode!=NULL){
            lastNode=lastNode->nextNode;
        }
        lastNode->nextNode = newNode;
    }
}

void deleteAtEnd(){
    if(head == NULL){
        return;
    }
    else{
        struct node *lastNode = head;
        while(lastNode->nextNode->nextNode!=NULL){
            lastNode=lastNode->nextNode;
        }
        lastNode->nextNode=NULL;
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
        insertAtEnd(name);
    }
    printf("after inseting at end\n");
    display();
    deleteAtEnd();
    printf("\nafter deleting at end\n");
    display();
    return 0;
}