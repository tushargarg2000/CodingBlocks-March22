#include <iostream>
using namespace std;
#include<bits/stdc++.h>
class Node{
  public:
    int data;
    Node* next;
};

Node* head = NULL;
void addAtEnd(int data){
    
    Node* newNode = new Node();
    
    newNode->data = data;

    if(head==NULL){
        head = newNode;
        return;
    }
    
    Node* current = head;
    
    while(current->next!=NULL){
        
        current = current->next;
    }
    current->next = newNode;
}

void printList(){
    
    Node *current = head;
    
    while(current!=NULL){
        
        cout<<current->data<<" ";
        current = current->next;
    }
}
int main() {
    
    
    addAtEnd(10);
    addAtEnd(20);
    addAtEnd(30);
    addAtEnd(40);
    
    cout<<head->data<<" "<<endl;
    printList();

	return 0;
}
