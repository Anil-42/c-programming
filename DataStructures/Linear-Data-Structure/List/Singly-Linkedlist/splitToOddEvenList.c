#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *nextNode;
}*head=NULL;

struct node *oddhead=NULL;
struct node *evenhead=NULL;

void insert(int n,struct node **headref){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)return;

    newNode->data = n;
    newNode->nextNode = NULL;

    if(*headref == NULL){
        *headref=newNode;
    }
    else{
        struct node *lastNode = *headref;
        while(lastNode->nextNode!=NULL){
            lastNode=lastNode->nextNode;
        }
        lastNode->nextNode = newNode;
    }
}

// void odd(int n){
//     struct node *newNode = (struct node*)malloc(sizeof(struct node));
//     if(newNode==NULL)return;

//     newNode->data = n;
//     newNode->nextNode = NULL;

//     if(oddhead == NULL){
//         oddhead=newNode;
//     }
//     else{
//         struct node *lastNode = oddhead;
//         while(lastNode->nextNode!=NULL){
//             lastNode=lastNode->nextNode;
//         }
//         lastNode->nextNode = newNode;
//     }    
// }

// void even(int n){
//     struct node *newNode = (struct node*)malloc(sizeof(struct node));
//     if(newNode==NULL)return;

//     newNode->data = n;
//     newNode->nextNode = NULL;

//     if(evenhead == NULL){
//         evenhead=newNode;
//     }
//     else{
//         struct node *lastNode = evenhead;
//         while(lastNode->nextNode!=NULL){
//             lastNode=lastNode->nextNode;
//         }
//         lastNode->nextNode = newNode;
//     }
// }


void splitToOddEvenList(){
    struct node *currNode=head;

    while(currNode!=NULL){
        if(currNode->data %2 == 0){
         insert(currNode->data,&evenhead);
        }
        else{
            insert(currNode->data,&oddhead);
        }
        currNode=currNode->nextNode;
    }


}

void display(struct node *head1){
    struct node *lastNode = head1;
    while(lastNode!=NULL){
        if(lastNode->nextNode==NULL){
            printf("%d",lastNode->data);
        }
        else{
            printf("%d->",lastNode->data);
        }
        lastNode=lastNode->nextNode;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int v;
        scanf("%d",&v);
        insert(v,&head);
    }
   
    splitToOddEvenList();
    printf("\nEven List:\n");
    display(evenhead);
    printf("\nOdd List:\n");
    display(oddhead);
    return 0;
}