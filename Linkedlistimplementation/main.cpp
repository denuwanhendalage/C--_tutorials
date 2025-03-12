#include <iostream>
using namespace std;

class Node{
public:
    int Value;
    Node* Next;
};
void println(Node*n){
    while(n!=NULL) {
        cout << n->Value << endl;
        n = n->Next;
    }
}
void insertAtTheFront(Node**head, int newValue){
    //1. prepare a newNode
    Node* newNode=new Node();
    newNode->Value=newValue;
    //2. put in front of current head
    newNode->Next=*head;
    //3. move head of the list to point to the newNode
    *head=newNode;
}

void insertAtTheEnd(Node**head,int newValue){
    //1. prepare a newNode
    Node* newNode =new Node();
    newNode->Value=newValue;
    newNode->Next=NULL;
    //2. if linked list is empty, newNode will be a head node
    if (*head==NULL){
        *head=newNode;
        return;
    }
    //3. find the last node
    Node*last=*head;
    while (last->Next!=NULL){
        last=last->Next;
    }
    //4. insert newNode after last node (at the end)
    last->Next=newNode;
}
void insertAfter(Node*previous,int newValue){
    //1.check if previous node is NULL
    if (previous==NULL){
        cout<<"previous can not be NULL";
        return;
    }
    //2.prepare a newNode
    Node* newNode=new Node();
    newNode->Value=newValue;
    //3. insert newNode after previous
    newNode->Next=previous->Next;
    previous->Next=newNode;
}


int main() {
    Node* head= new Node();
    Node*second=new Node();
    Node*third=new Node();

    head->Value=1;
    head->Next=second;
    second->Value=2;
    second->Next=third;
    third->Value=3;
    third->Next=NULL;
   // insertAtTheFront(&head,-1);
 //   insertAtTheEnd(&head,4);
    insertAfter(head,-1);
    insertAfter(second,-2);
    println(head);
    return 0;
}
