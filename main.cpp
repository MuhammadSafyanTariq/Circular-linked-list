#include<iostream> 
 using namespace std; 
  
  
 struct Node{ 
 int data; 
 struct Node *next; 
 }; 
  
  
 //Traverse 
  
  
 void traverse(struct Node *ptr) { 
 struct Node * head=ptr; 
 while(ptr->next!=head) { 
 cout<<ptr->data<<endl; 
 ptr=ptr->next; 
 } 
 cout<<ptr->data<<endl; 
 cout<<"finish"<<endl; 
 } 
  
 //searching 
  
 void search (struct Node * head, int data) { 
 int index=0; 
 int num; 
 struct Node * ptr=head; 
 while(ptr->next != head) { 
 if(ptr->data==data) { 
 cout<<"The number is present at "<<index<<" index"<<endl; 
  
 } 
  
 ptr=ptr->next; 
 index++; 
 } 
  
 if(ptr->data==data) { 
 cout<<"The number is present at "<<index<<" index"<<endl; 
  
 } 
  
  
  
 } 
  
 //insertion 
  
  
 struct Node* insertAtBegin(struct Node* head, int data) { 
 struct Node * p=head; 
 struct Node * ptr; 
 while(p->next != head) { 
 p=p->next; 
 } 
 p->next=ptr; 
 ptr=(struct Node*) malloc(sizeof(struct Node)) ; 
 p->next=ptr; 
 ptr->next=head; 
 ptr->data=data; 
 return ptr; 
 } 
  
  
 struct Node* insertAtIndex(struct Node* head, int data, int index) { 
  
 struct Node * ptr; 
 ptr=(struct Node*) malloc(sizeof(struct Node)) ; 
 struct Node * p=head; 
 int i=0; 
 while(i!=index- 1){ 
 p=p->next; 
 i++; 
  
 } 
 ptr->data=data; 
 ptr->next=p->next; 
 p->next=ptr; 
 return head; 
 } 
  
  
 void insertAtLast(struct Node* head, int data) { 
 struct Node * p=head; 
 struct Node * ptr; 
 ptr=(struct Node*) malloc(sizeof(struct Node)) ; 
 while(p->next != head) { 
 p=p->next; 
 } 
 p->next=ptr; 
 ptr->next=head; 
 ptr->data=data; 
  
  
 } 
  
  
 void insertAtAdd(struct Node * head, struct Node * adr,int data) { 
 struct Node * p=head; 
 struct Node * ptr; 
 ptr=(struct Node*) malloc(sizeof(struct Node*)) ; 
 ptr->next=adr->next; 
 adr->next=ptr; 
 ptr->data=data; 
 } 
  
  
  
  
  
  
 //deletion 
  
  
 struct Node * deleteAtFirst(struct Node * head) { 
  
 struct Node * ptr=head; 
 struct Node * p=head; 
  
 while(p->next != head) { 
 p=p->next; 
 } 
 p->next=ptr->next; 
  
  
  
 free(ptr) ; 
  
 return p->next; 
  
 } 
  
  
  
 void deleteAtIndex(struct Node * head, int index) { 
 struct Node * p=head; 
 struct Node * q=head->next; 
 int i=0; 
 while(i<index-1) { 
 p=p->next; 
 q=q->next; 
 i++; 
 } 
 p->next=q->next; 
 free(q) ; 
 } 
  
 void deleteAtLast(struct Node * head) { 
 struct Node * p=head; 
 struct Node * q=head->next; 
 while(q->next != head) { 
 p=p->next; 
 q=q->next; 
 } 
 p->next=head; 
  
 free(q) ; 
}


  struct Node * sorting(struct Node * head) {
struct Node * ptr=head;
  

struct Node * p;
struct Node * q;
struct Node * h=head;
int temp;
int i=0;
  for(p=head; p->next!=head;p=p->next){

for(q=p->next; q->next!=head;q=q->next){
  if(p->data>q->data){
    temp=p->data;
    p->data=q->data;
    q->data=temp;
   if(i==0) {
h=p;
}
  }

}
if(q->data<p->data){
    temp=p->data;
    p->data=q->data;
    q->data=temp;
    }
 i++;
}
return h;
}

  
 int main () 
 {
  
  
 struct Node * head; 
 struct Node * second; 
 struct Node * third; 
 struct Node * fourth; 
struct Node * fifth; 
 struct Node * ptr; 
  
 //creating Nodes 
 head=(struct Node*) malloc(sizeof(struct Node)) ; 
 second=(struct Node*) malloc(sizeof(struct Node)) ; 
 third=(struct Node*) malloc(sizeof(struct Node)) ; 
 fourth=(struct Node*) malloc(sizeof(struct Node)) ; 
  fifth=(struct Node*) malloc(sizeof(struct Node)) ; 
  
 //linking nodes 
  
 head->data=777; 
 head->next=second; 
 second->data=11; 
 second->next=third; 
 third->data=77; 
 third->next=fourth; 
 fourth->data=3; 
 fourth->next=fifth; 
fifth->data=4; 
 fifth->next=head; 
 traverse(head) ; 
  //search(head, 777) ;
head=sorting (head) ;
 traverse(head) ; 
 //here you can call all the functions 
  
  
 return 0; 
 }