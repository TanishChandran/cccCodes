#include<stdio.h>
#include<stdlib.h>
 struct node {
    int val;
    struct node* next;
 };

 int main(){
    struct node* head=NULL;
    head =(struct node *)malloc(sizeof(struct node));
    head->val=45;
    head->next=NULL;
    printf("%d",head->val);
    return 0;
 }