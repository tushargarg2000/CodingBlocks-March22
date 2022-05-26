//Solve Sudoku

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
	
bool isValidToKeep(int digit,int i,int j,vector<vector<int> > matrix){

	//Check for that row
	for(int k=0;k<9;k++){
		if(arr[i][k]==digit){
			return false;
		}
	}

	//Check for a particular Column

	for(int k=0;k<9;k++){
		if(arr[k][j]==digit){
			return false;
		}
	}

	//Box waali cheez

	int si = (i/3)*3;

	int sj = (j/3)*3;

	
	//Iterate over the box

	for(int p=si;p<si+3;p++)
		for(int q=sj;q<sj+3;q++){
			if(matrix[p][q]==digit){
				return false;
			}
		}	

	return true;


} 
bool canSolveSudoku(int i,int j,vector<vector<int> >matrix){

	//Base case ...?????

	if(i==9){

		//print the Sudoku matrix

		for(int p=0;p<9;p++){
			
			for(int q=0;q<9;q++)
				cout<<matrix[p][q]<<" ";
			cout<<endl;
		}
		return true;
	}


	//If the ith row is full start checking next row

	if(j==9)
		return canSolveSudoku(i+1,0,matrix);


	//this position is already prefilled
	if(matrix[i][j]!=0){
		return canSolveSudoku(i,j+1,matrix); //Solve for the next column
	
	}



	//Normal Case

	for(int no=1;no<=9;no=no+1){

		if(isValidToKeep(no,i,j,matrix)){
		
			matrix[i][j] = no;

			bool kyaBaakiSolveHojayega = canSolveSudoku(i,j+1,matrix);

			if(kyaBaakiSolveHojayega==true){
				return true;
			}

			//Other wise --> decision that I had taken is wrong
			matrix[i][j] = 0; //Resetting it back to 0..erasing my choice

		}

	}

	//Sudoku can't be solved.....
	return false;


}

int main(){



}