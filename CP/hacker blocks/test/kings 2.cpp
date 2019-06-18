/* C/C++ program to solve N Queen Problem using 
backtracking */
#include<bits/stdc++.h> 
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define FORS(i,a,b) for(long long int i=a;i<b;i++)

using namespace std;
vector<vector<int>>board;
int c=0;
/* A utility function to print solution */
void printSolution() 
{ 
c++;	
} 


bool isSafe(int row, int col) 
{ 
	int i, j; 

	/* Check this row on left side */
	for (i = 0; i < col; i++) 
		if (board[row][i]) 
			return false; 

  	if(row>0&&col>0){
	if(board[row-1][col-1])
      return false;}
  	if(row<board.size()-1){
      if(board[row+1][col-1])
        return false;}

	return true; 
} 

/* A recursive utility function to solve N 
Queen problem */
bool solveNQUtil(int col) 
{ 
	/* base case: If all queens are placed 
	then return true */
	if (col == board.size()) 
	{ 
		printSolution(); 
		return true; 
	} 

	/* Consider this column and try placing 
	this queen in all rows one by one */
	bool res = false; 
	for (int i = 0; i < board.size(); i++) 
	{ 
		/* Check if queen can be placed on 
		board[i][col] */
		if ( isSafe(i, col) ) 
		{ 
			/* Place this queen in board[i][col] */
			board[i][col] = 1; 

			// Make result true if any placement 
			// is possible 
			res = solveNQUtil(col + 1) || res; 

			/* If placing queen in board[i][col] 
			doesn't lead to a solution, then 
			remove queen from board[i][col] */
			board[i][col] = 0; // BACKTRACK 
		} 
	} 

	/* If queen can not be place in any row in 
		this column col then return false */
	return res; 
} 

/* This function solves the N Queen problem using 
Backtracking. It mainly uses solveNQUtil() to 
solve the problem. It returns false if queens 
cannot be placed, otherwise return true and 
prints placement of queens in the form of 1s. 
Please note that there may be more than one 
solutions, this function prints one of the 
feasible solutions.*/
void solveNQ(int N) 
{ 
	board.resize(N);
  	FORS(i,0,N){
    FORS(j,0,N){
    	board[i].resize(N);
    }
    }
	if (solveNQUtil(0) == false) 
	{ 
		printf("Solution does not exist"); 
		return ; 
	} 

	return ; 
} 

// driver program to test above function 
int main() 
{ 
  	int N;
  	cin>>N;
	solveNQ(N); 
  	cout<<c;
	return 0; 
} 
