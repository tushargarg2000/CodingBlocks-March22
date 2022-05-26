#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){


	int n;
	cin>>n;
	int arr[n+5];
	for(int i=1;i<=n;i++)
			cin>>arr[i];
	int m;
	cin>>m;
	int arr1[m+5]
	for(int j=1;j<=m;j++)
			cin>>arr1[j];

	i=1;j=1;

	int ans[n+m+1];
	int k = 1;
	while(i<=n&&j<=m){ //until both of the arrays actually have values....

		if(arr[i]<=arr1[j]){
			ans[k++] = arr[i++];
		}else
			ans[k++] = arr1[j++];
	}

	//Either arr will be left or arr1 will be left....

	while(i<=n) //If first array would have been left...
		ans[k++] = arr[i++]; //Copying all the elements to the ans array

	while(j<=m) //If second arr1 is of larger size
		ans[k++] = arr1[j++]; //Copy the elemnts to the ans array

	for(int i=1;i<=n+m;i++)
			cout<<arr[i]<<" ";
	cout<<endl;





}