#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
		
	int n,m;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int target;
	cin>>target;
	//array elements are in the range [0--n-1]
	for(int start=0;start<n;start++){

		for(int end = start;end<n;end++){

			int sum = 0;
			for(int index=start;index<=end;index++)
					sum = sum + arr[index];

			if(sum==target){
				break;	
			}

		}
	}


}