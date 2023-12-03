#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
     Node* next;
     
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_alt_tail(Node *&head, int v){
 
  Node *newNode=new Node(v);
  
  if(head==NULL){
      head=newNode;
      return;
  }
  
  Node *tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next; 
    }
    tmp->next=newNode;
    cout<<endl<<"inserted at tail"<<endl;
}

void print_linked_list(Node *head){
    cout<<"Your Linked List: ";
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}


void insert_at_position(Node *head,int pos,int v){
    Node *newNode=new Node(v);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Inserted at position"<<endl;
}

void insert_at_head(Node *&head,int v){
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"insert at head"<<endl;
    return;
}
int main() 
{
    Node *head =NULL;
    
   while(true){
     cout<<"Option 1: Insert at tail : "<<endl;
     cout<<"Option 2: Print Linked list :"<<endl;
     cout<<"Option 3: Insert any position :" <<endl;
     cout<<"Option 4: Insert at head :" <<endl;
     cout<<"Option 5: Terminated :" <<endl;
        int op;
    cin>>op;
  if(op==1){
      cout<<"Please enter value : ";
      int v;
      cin>>v;
    insert_alt_tail(head,v);
  }else if(op==2){
       print_linked_list(head);
  }else if(op==3){
     int pos,v;
    cout<<"Enter position : ";
    cin>>pos;
    cout<<"Enter value : ";
     cin>>v;
     if(pos==0){
         insert_at_head(head,v);
     }else{
     insert_at_position(head,pos,v);
     }
    
  }else if(op==4){
    int v;
      cout<<"Enter value : ";
     cin>>v;
      insert_at_head(head,v);
  }
  else if(op==5){
       break;
  }
 
   }
    
    return 0;
}