//inserting elemnet in the linked list starting , ending 
//split linked list in half
#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
//function to create new node 
struct Node* createNode(int value){
  struct Node* newNode =(struct Node*)malloc(sizeof(struct Node));
  newNode->data=value;
  newNode->next= NULL;
  return newNode;
}


//adding the node at the starting
struct Node* insert_at_start(struct Node* head,int data){
  if(head==NULL)
  return head;
  //phele jo data h aush ko node me convert karo (node)
  struct Node* node=createNode(data);
  //do the node next point to current head
  node->next=head;
  //now returning new node as the new head
  return node;
}

//Now inserting the node at the end of the list
struct Node* insert_at_end(struct Node* head,int data){
  struct Node* new_node=createNode(data);
  struct Node* curr = head;

  //iterate until the curr next not reaches the null
  while(curr->next != NULL){
    curr=curr->next;
  }
  //linked the last node of previous list to the new node we make
  curr->next=new_node;
}

//making the split node function
struct Node* node_split(struct Node* head){
  struct Node* slow=head;
  struct Node* fast=head;
  while(fast!=NULL && slow!=fast){
    fast= fast->next;
    if(fast->next!=NULL){
      fast=fast->next;
    }
    slow=slow->next;
  }
  //new head
  return slow->next;

}


//printing the node
void print_linked_list(struct Node* head){
  //make a helping curr to print the data
  struct Node* curr=head;
  while(curr!=NULL){
    printf("%d " ,curr->data);
    curr= curr->next;
  }
}



int main(){
  struct Node* head=createNode(1);
  //lining/adding more nodes
  head->next=createNode(2);
  head->next->next=createNode(3);
  head->next->next->next=createNode(4);
  print_linked_list(head);
  printf("\n");
  //taking the data to be inserted
  int data;
  printf("enter the data to be inserted : ");
  scanf("%d",&data);
  head=insert_at_start(head,data);
  printf("printing after adding node to start: \n");
  print_linked_list(head);

  printf("\nenter the data to be inserted : ");
  scanf("%d",&data);

  insert_at_end(head,data);
 
  printf("\n printing after inserting node at the last \n");
  print_linked_list(head);
  
  //spilitting the node into two parts
  struct Node* newhead=node_split(head);
  
  printf("printing left part \n");
  print_linked_list(head);

  printf("\nprinting right part \n");
  print_linked_list(newhead);



}