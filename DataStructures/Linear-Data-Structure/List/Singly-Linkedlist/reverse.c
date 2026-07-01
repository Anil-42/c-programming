#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char *data;
    struct node *nextNode;
}*head=NULL;

void insert(char *name){
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

void reverse(){
    if (head == NULL || head->nextNode == NULL) {
        return;
    }

    struct node *currNode=head;
    struct node *lastNode=NULL;
    while(currNode->nextNode!=NULL){
        struct node *temp=currNode->nextNode;
        currNode->nextNode=lastNode;
        lastNode=currNode;
        currNode=temp;
    }
    currNode->nextNode=lastNode;
    head=currNode;
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
        insert(name);
    }
    printf("\nafter inserting\n");
    display();
    reverse();
    printf("after reverse:\n");
    display();
    return 0;
}