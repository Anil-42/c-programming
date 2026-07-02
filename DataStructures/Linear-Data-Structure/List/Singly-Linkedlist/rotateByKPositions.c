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


void rotateByKPositions(int k){
    struct node *lastNode=head;
    int count=1;
    while(lastNode->nextNode!=NULL){
        lastNode=lastNode->nextNode;
        count++;
    }

    k = k % count;
    if(k==0)k=count;
    lastNode->nextNode=head;
    struct node *currNode=head;
    for(int i=1;i<k;i++){
        currNode=currNode->nextNode;
    }
    head = currNode->nextNode;
    currNode->nextNode=NULL;

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
    int k;
    scanf("%d",&k);
    rotateByKPositions(k);
    printf("after rotating by k nodes:\n");
    display();
    return 0;
}