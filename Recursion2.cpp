#include<iostream>
#include<bits/stdc++.h>
using namespace std;


boolean 
void printSubsequence(int index,string original,string ans){

	if(index==original.length())
	{
		cout<<ans<<endl;
		return;
	}

	char current = original[index]; //Current character

	//Leaving the current character
	printSubsequence(index+1,original,ans); //try to print all the 
	//subsequnces by just leaving this current character

	//Choose the current character and print the subsequences
	printSubsequence(index+1,original,ans+current);

}
string convertIntToString(int no){

	if(no==0)
		return "";


	int digit = no%10; //getting the last digit

	string aageWaalaAns = convertIntToString(no/10);

	string curr = to_string(digit);

	return aageWaalaAns + curr;

}
int main(){

	int n;
	cin>>n;

	string ans = convertIntToString(n);

	cout<<ans<<endl;


	string original = "abc";

	printSubsequence(0,original,"");
}