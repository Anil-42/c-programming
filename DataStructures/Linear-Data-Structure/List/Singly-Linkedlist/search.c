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

void search(char *name){
    struct node *lastNode=head;
    while(lastNode->nextNode!=NULL){
        if(strcmp(lastNode->data,name)==0){
            printf("element found\n");
            return;}
            lastNode=lastNode->nextNode;
    }
    printf("not Found\n");
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
     printf("enter an element to search: ");
    char *name = (char*)malloc(100+1);
    scanf("%s",name);
    search(name);
    return 0;
}