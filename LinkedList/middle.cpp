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
    
    Node* newNode = new Node(); //Node declaration part 
    newNode->data = data; //adding the data 

    if(head==NULL){
        head = newNode;
        return;
    }
    
    //This is for all other nodes 
    Node* current = head;
    while(current->next!=NULL){
        
        current = current->next;
    }
    current->next = newNode;
}

Node* coolPrintListFunction(Node* head){
    
    Node *current = head;
    
    while(current!=NULL){
        
        cout<<current->data<<" ";
        current = current->next;
    }
    
    return head;
    
}

bool isPresent(int no){
    
    Node* current = head;
    
    while(current!=NULL){ //until the complete linked list is traveresed 
        
        if(current->data==no)
        return true;
        
        current = current->next;
    }
    
    return false;
}

int getMiddle(){
    
    Node* fast = head;
    Node* slow = head;
    
    
    while(fast->next!=NULL&&fast->next->next!=NULL){
        
        fast = fast->next->next;
        slow = slow->next;
    }
    
    
    return slow->data;
    
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
    addAtEnd(50);
    
    //cout<<head->data<<" "<<endl;
    //printList();

    int value = getMiddle();
    
    cout<<value<<endl;
	return 0;
}