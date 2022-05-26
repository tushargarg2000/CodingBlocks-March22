#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];


	for(int i=0;i<n;i++){ //for every index

		int minIndex = i; //store the index of the minimum Value
		
		//This for loop is actually trying to find out the minimum value...denoting
		//
		for(int j=i+1;j<n;j++){ //We are trying to find the min value

			if(arr[j]<arr[minIndex])
				minIndex = j;

		}
		swap(arr[i],arr[minIndex]);
	}


	
}