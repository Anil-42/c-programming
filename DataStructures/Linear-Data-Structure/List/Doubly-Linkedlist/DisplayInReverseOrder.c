#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char *data;
    struct node *nextNode;
    struct node *prevNode;
}*head=NULL;

void insert(char *name){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)return;

    newNode->data = name;
    newNode->nextNode = NULL;
    newNode->prevNode = NULL;

    if(head==NULL){
        head=newNode;
    }
    else{
        struct node *lastNode=head;
        while(lastNode->nextNode!=NULL){
            lastNode=lastNode->nextNode;
        }
        lastNode->nextNode=newNode;
        newNode->prevNode=lastNode;
    }
}

void DisplayInReverseOrder(struct node *currNode){
    if(currNode==NULL)return;
    DisplayInReverseOrder(currNode->nextNode);
    if(currNode->prevNode==NULL){
            printf("%s",currNode->data);
        }
        else{
            printf("%s<=>",currNode->data);
        }
}

void display(){
    struct node *lastNode = head;
    while(lastNode!=NULL){
        if(lastNode->nextNode==NULL){
            printf("%s",lastNode->data);
        }
        else{
            printf("%s<=>",lastNode->data);
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
        insert(name);
    }
    printf("after insertion:\n");
    display();

    printf("\nreverse order:\n");
    DisplayInReverseOrder(head);

    return 0;
}