#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *nextNode;
}*head=NULL;

void insert(int n){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)return;

    newNode->data = n;
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


void replaceWithSumItselfNext(){
    if(head==NULL)return;
    struct node *currNode=head;
    while(currNode->nextNode!=NULL){
        currNode->data = currNode->data + currNode->nextNode->data;
        currNode=currNode->nextNode;
    }
}

void display(){
    struct node *lastNode = head;
    while(lastNode!=NULL){
        if(lastNode->nextNode==NULL){
            printf("%d",lastNode->data);
        }
        else{
            printf("%d->",lastNode->data);
        }
        lastNode=lastNode->nextNode;
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int v;
        scanf("%d",&v);
        insert(v);
    }
    printf("\nafter inserting:\n");
    display();
    replaceWithSumItselfNext();
    printf("after replacing Nodes With Sum of Itself & Next:\n");
    display();
    return 0;
}