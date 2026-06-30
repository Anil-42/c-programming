#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char *data;
    struct node *nextNode;
}*head=NULL;

void insertAtpos(char *name, int p){
    if(p<1){
        printf("invalid poition");
        return;
    }

    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)return;

    newNode->data = name;
    newNode->nextNode = NULL;

    if(p==1 || head == NULL){
        newNode->nextNode = head;
        head=newNode;
        return;
    }

    struct node *lastNode = head;
    for(int i=1;i<p-1 && lastNode->nextNode!=NULL;i++){
        lastNode=lastNode->nextNode;
    }
    newNode->nextNode = lastNode->nextNode;
    lastNode->nextNode = newNode;
}

void deleteAtPos(int p){
    if(head==NULL)return;
    if(p<1){
        printf("enter valid position");
        return;
    }
    struct node *lastNode = head;
    for(int i=1;i<p-1 && lastNode->nextNode!=NULL;i++){
        lastNode=lastNode->nextNode;
    }
    lastNode->nextNode = lastNode->nextNode->nextNode;

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
    printf("enter no.of input:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int p;
        char *name = (char*)malloc(100+1);
        printf("enter data: ");
        scanf(" %s",name);
        printf("enter position: ");
        scanf(" %d",&p);
        insertAtpos(name,p);
    }
    
    printf("after inseting at pos\n");
    display();
    int p;
    printf("enter a position to delete");
    scanf("%d",&p);
    deleteAtPos(p);
    printf("\nafter deleting at pos\n");
    display();
    return 0;
}