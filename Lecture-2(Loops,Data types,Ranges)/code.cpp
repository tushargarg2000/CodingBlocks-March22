#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Hello World!";

    int n;
    //Read a no.
    cin>>n;

    cout<<"Printing number from 1 to "<<n<<endl;
    //Print no. from 1 to n
    int i = 1;
    for(;i<=n;i=i+1){

        cout<<i<<" panchal ";

    }    

    //Print sum of first even numbers uptil n
    int sum = 0;
    for(int no=2;no<=n;no=no+2){
        sum = sum + no;
    }
    cout<<sum<<endl;

    //Print sum of cubes of first n numbers
    sum = 0;
    for(int i=1;i<=n;i++){

        int cube = i*i*i;
        sum = sum + cube;
    }

    cout<<sum<<endl;


    //defining and initializing variables

    //----This is a comment
   
    //While loop code

    int value;
    cin>>value;

    //count the number of digits
    int cnt = 0;
    while(value>0){
        cnt = cnt+1;
        value = value/10;
    }

    //Checking if statements

    int var = 10;

    //single if
    if(var>5)
        cout<<"doing good"<<endl;

    //command line

    if(var>10)
        cout<<"hi"<<endl;
    else
        cout<<"bye"<<endl;

    //----------------------------->
    if(var>50)  
        cout<<"1"<<endl;
    else if(var>7)
        cout<<2<<endl;
    else if(var>8)
        cout<<3<<endl;
    else   
        cout<<4<<endl;
    
    //sum of first n natural no's
    sum = 0;
    for(int no=1;no<=n;no=no+1)
        sum = sum + no;

    //Same code using while
    int no = 1; //initializtion
    
    
    int faisalSum;
    //Initalization is important
    cout<<"faisalSum is having a value"<<faisalSum<<endl;
    sum = 0;

    //count the number of digits..... in 
    

    while(no<=n){ //condition check
        
        sum = sum + no;
        no = no+1; //updation part
    }

    



    cin>>value;
    int count = 0;
    while(value>0){

        count = count + 1;
        value = value/2;

    }
    cout<<"count is"<<count<<endl;
    int a = 23;
    int b = 5;

    cout<<a/b<<endl;

    int c = 23;
    float d = 5;

    cout<<c/d<<endl;

    double e = .12345;

    long f = 10;

    cout<<e+f<<endl;


    float upp = 22;
    float down = 7;

    float ans = upp/down;

    cout<<ans<<endl;

    return 0;

}
