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


void deleteKthNodes(int k){
   
    if(k<=0 ||head==NULL)return;
    if(k==1){
        struct node *currNode = head;
        while(currNode->nextNode!=NULL){
            struct node *temp=currNode;
            currNode = currNode->nextNode;
            free(temp);
        }
        head=NULL;
        return;
    }
    struct node *currNode = head;
    int count=1;
    while(currNode != NULL && currNode->nextNode != NULL){
        if((count+1)%k==0){
            struct node *temp=currNode->nextNode;
            currNode->nextNode=currNode->nextNode->nextNode;
            free(temp);
            count+=2;
        }
        else{
            count++;
        }
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
    int k;
    scanf("%d",&k);
    deleteKthNodes(k);
    printf("after deleting all kth nodes:\n");
    display();
    return 0;
}