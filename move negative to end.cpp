#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){


	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)	
		cin>>arr[i];

	int newArr[n];


	//first for loop --> keep the positive elements in the front

	int index = 0;

	for(int i=0;i<n;i++){
		if(arr[i]>=0){
			newArr[index] = arr[i];
			index++;
		}
	}

	for(int i=0;i<n;i++){

		if(arr[i]<0){
			newArr[index] = arr[i];
			index++;
		}
	}

	for(int i=0;i<n;i++)
			cout<<newArr[i]<<" ";
	cout<<endl;
}