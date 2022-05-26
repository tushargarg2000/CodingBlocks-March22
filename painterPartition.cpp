#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool canPaint(int timeGiven,vector<int> &arr,int painters){

	int cnt = 1;
	int time = 0;
	for(int i=0;i<arr.size();i++){

		time = time + arr[i];

		if(time<=timeGiven)
			continue;

		cnt++;
		time = arr[i];
	}

	//Now we have got the cnt --> no. of painters required to paint the board
	//with the given Time constraint.....

	if(cnt<=painters)
		return true;
	else
		return false;

}

int main(){

	int n;
	cin>>n;
	vector<int> arr(n+5,0);
	for(int i=1;i<=n;i++)
			cin>>arr[i];

	int k;
	cin>>k;

	int maxTime = 0,minTime = 0;

	for(int i=1;i<=n;i++)
	{
		maxTime = maxTime + arr[i];
		minTime = max(minTime,arr[i]);
	}

	int start = minTime;
	int end = maxTime;

	int ansTime = 0;
	while(start<=end){

		int mid = (start+end)/2;


		bool check = canPaint(mid,arr,k);

		if(check==true){
			//What piece of code to write
			ansTime = mid;
			end = mid-1;
		}else
			start = mid+1;
	}

	cout<<ansTime<<endl;

}