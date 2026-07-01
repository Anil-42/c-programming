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

void sort(){
    int flag=1;
    struct node *lastread=NULL;
    while(flag){
        flag=0;
        struct node *currNode=head;

        while(currNode->nextNode!=lastread){
            if(strcmp(currNode->data,currNode->nextNode->data)>0){
                char temp[100];
                strcpy(temp,currNode->data);
                strcpy(currNode->data,currNode->nextNode->data);
                strcpy(currNode->nextNode->data,temp);
                flag=1;
            }
            currNode=currNode->nextNode;
        }
        lastread=currNode;
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
        insert(name);
    }
    printf("\nafter inserting\n");
    display();
    sort();
    printf("after sorting\n");
    display();
    return 0;
}