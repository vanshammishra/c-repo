#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next; //this is a self referencing structure which would point to the next nodes
};
// here in struct node *ptr.   *ptr is pointing towards the struct node which is defined above..
 void printdata(struct node *ptr){
     while (ptr!=NULL)
     {
         printf("%d\n",ptr->data); //ptr->data would print the values which the ptr is pointing towards..
                                 //... the values stoored in the data 
         ptr=ptr->next; // now we need to update the ptr to print all the values
         // as next is pointing towrads the other nodes so by pointing towards the next..
     }                           
     

 }
void main()
{   // here we are declaring the diffrent types of nodes
    struct node *head;
    struct node *second;
    struct node *third;
    // now we need to allocate the memory dynamically in the heap
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    //now we would link the data of the linked lists with each other
    head->data=7; // this would store the data of the head
    head->next=second; // here the next pointer of the head is pointing towards the second node
    second->data=21;  //this would store the data of the seond node
    second->next=third; // here the next pointer of the head is pointing towards the third node
    third->data=69;    //this would store the data of the third node
    third->next=NULL;  //here the next node of the head is pointing towards the  null;
    printdata(head);

}