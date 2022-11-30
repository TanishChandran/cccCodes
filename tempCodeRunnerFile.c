#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node* next;
};
typedef struct node node;
node* head=NULL;
node* createList(node*);
void displayList(node*);

int main(){
    printf("\nCreate List:\n");
    head=createList(head);
    printf("\nThe List is:\n");
    displayList(head);
    return 0;
}
node* createList(node* head){
    node* temp =head;
    char opn;
    do{
        node* newNode=(node*) malloc(sizeof(node));
        printf("\nEnter data into new Node:\n");
        scanf("%d",&newNode->d);
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            temp=head;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
        printf("\nDo you want one more node(y/n)?\n");
        scanf(" %c",&opn);
    }while(opn=='\n');
    return head;
}
void displayList(node* head){
    if(head==NULL)
    return;
    else{
        node* ptr =head;
        while(ptr!=NULL){
            printf("%d->",ptr->d);
            ptr=ptr->next;
        }
    }
}