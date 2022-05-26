#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//index of first Occurence in an Array
int findFirstOccur(int index,int arr[],int target){

	//Base Case
	if(index==arr.length()){
			return -1;
	}

	//Condition Check Part
	if(arr[index]==target){
		return index;
	}
	int findFindex = findFirstOccur(index+1,arr,target);
	return findFindex;

}

void printAllOccur(int index,int arr[],int target){

	if(index==arr.length())
		return;

	if(arr[index]==target)
		cout<<index<<" ";

	printAllOccur(index+1,arr,target);
}

int printLastOccur(int index,int arr[],int target){

	if(index<0)
		return -1;

	if(arr[index]==target)
			return index;

	return printLastOccur(index-1,arr,target);
}

int main(){
		
	int n,m;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int target;
	cin>>target;

	cout<<findFirstOccur(0,arr,target);

	printAllOccur(0,arr,target);

	cout<<printLastOccur(arr.length()-1,arr,target)<<endl;
	


}