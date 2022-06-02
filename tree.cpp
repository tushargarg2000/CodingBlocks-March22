#include <iostream>
using namespace std;


//Defining the class node.....
class Node{
    //Attributes
    public:
        int data;
        Node* left;
        Node* right;
        
    Node(int data){
        
        this->data = data;
        //This keyword is used to distinguish between the parametric data value and the variable outside 
        left = NULL;
        right = NULL;
        
    }
    
};

void inorder(Node* root){
    
    if(root==NULL)
        return;
        
    inorder(root->left); //Print all the nodes of the left subtree.....
    
    cout<<root->data<<" "; //Printing the data 
    
    inorder(root->right); //Printing the right subtree....
        
    
    
}

//Height of Tree....

int sum; //This sum variable will help me find the sum of the node...

void sumOfNodes(Node* root){
    
    if(root==NULL)
        return;
        
    sum = sum + root->data;
    sumOfNodes(root->left);
    sumOfNodes(root->right);
    
}

//Sum of only leaf nodes......
//Sum of only leaf nodes....



Node* addNode(Node* root,int key){
    
    //Base case 
    if(root==NULL)
    {
        //This is an empty space 
        Node* newNode = new Node(key);
        return newNode;
    }
    
    if(root->data<key){
        root->right = addNode(root->right,key);
    }else
        root->left = addNode(root->left,key);
        
    return root;
    
}
int sumOfLeafNodes(Node* root){
    
    if(root==NULL)
        return 0;
    
    //node is a leaf node......or node is non-leaf node....
    
    if(root->left==NULL && root->right==NULL)
        return root->data;
        
    //If non-leaf node....
    //Try to get answers from the left subtree and right Subtree..... 
    return sumOfLeafNodes(root->left)+sumOfLeafNodes(root->right);
}

int countNoOfNodes(Node* root){
    
    if(root==NULL)
        return 0;
        
    int leftCount = countNoOfNodes(root->left); //No of nodes in the left subtree.... 
    
    int rightCount = countNoOfNodes(root->right);
    
    return leftCount + rightCount + 1;
    
}
void postOrder(Node* root){
    
    if(root==NULL)
        return;
    
    postOrder(root->left);
    
    postOrder(root->right);
    
    cout<<root->data<<" "; //sum = sum + root->data
    
}

void preOrder(Node* root){
    
    
    if(root==NULL)
        return;
        
    cout<<root->data<<" ";
    
    preOrder(root->left);
    preOrder(root->right);
    
    
}

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)    
	    cin>>arr[i];
	    
	Node* root=NULL;
	
	for(int i=0;i<n;i++)    
	    root = addNode(root,arr[i]);
	    
	int ans = countNoOfNodes(root);
	
	preOrder(root);
	
	postOrder(root);
	
	
	cout<<"Ans is "<<ans<<endl;
	
	
	return 0;
}
