/*
Say that you are a traveller on a 2-D grid. You begin in the top-left corner and your goal is to travel to the
bottom-right corner. You can only move down or right.

In how many ways can you travel to the goal on a grid with dimensions m*n
*/
#include<iostream>
using namespace std;

unsigned long long memo[100][100];

unsigned long long gridTraveller (int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    
    if (memo[m][n])
        return memo[m][n];


    memo[m][n] = gridTraveller(m-1, n) + gridTraveller (m, n -1);

    return memo[m][n];
}

int main ()
{   
        int m, n = 0;

    cout<<"Enter m : ";
    cin>>m;
    
    cout<<"Enter n : ";
    cin>>n;        
  
    while (m !=0 && n!= 0) {

        memo[1][1] = 1;

        cout << gridTraveller (m,n)<<endl;

        cout << "\n===================================\n";

        cout<<"Enter m : ";
        cin>>m;
    
        cout<<"Enter n : ";
        cin>>n;
    }

    return 0;
}