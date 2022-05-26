#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string numToString[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

//Important 
int findPower(int x,int n){

	//Base Case
	if(n==0)
		return 1;

	if(n%2==0){ //N is even
		return findPower(x,n/2)*findPower(x,n/2);
	}else{
		//N is odd
		return x*findPower(x,n/2)*findPower(x,n/2);

	}


}
void printInEnglish(int no){

	if(no==0)
		return;

	int remainder = no%10;
	printInEnglish(no/10);

	cout<<numToString[remainder]<<" ";

}
bool isSorted(int index,vector<int> &vec){

	if(index==vec.size()-1)
		return true;

	if(vec[index]>vec[index+1])
		return false;

	bool forwardAns = isSorted(index+1,vec);

	if(forwardAns&&vec[index]<=vec[index+1])
			return true;

	else
		return false;

}

void towerOfHanoi(int n,char from,char to, char temp){

	if(n==0)
		return;

	//Step 1 of setting n-1 disks from A to B
	towerOfHanoi(n-1,from,temp,to);

	cout<<"Move disk from "<<from<<" to "<<to<<endl;

	towerOfHanoi(n-1,temp,to,from);


}
int findIndex(int start,int end,vector<int> arr,int target){

	//Base case
	//Search was there is over...that range is finished
	if(start>end){
		return -1;
	}

	int mid = (start+end)/2;

	//3 Conditions that are presnt
	if(arr[mid]==target)
			return mid;

	else if(arr[mid]<target)
			return findIndex(mid+1,end,arr,target);
	else
		return findIndex(start,mid-1,arr,target); 

}
int findSumOfArray(int index,vector<int> vec){

	int n = vec.size();
	
	if(index==n)
		return 0;

	int sum = 0;

	int forwardSum = findSumOfArray(index+1,vec);

	int totalSum = vec[index] + forwardSum;

	return totalSum;
}
int main(){

	int n;
	cin>>n;

	vector<int> vec(n,0);

	for(int i=0;i<n;i++)
			cin>>vec[i];

	//Taken the User Input as amn arry

	//bool finalAns = isSorted(0,vec);

	//cout<<finalAns<<endl;

	//towerOfHanoi(3,'A','C','B');

	printInEnglish(12345);

	findPower(2,10);
}