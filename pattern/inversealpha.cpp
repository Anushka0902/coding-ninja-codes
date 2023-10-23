/*
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */int n;
    cin >> n;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i;j++)
            cout << char(n-i+j+'A'-1);
        cout << endl;
    }
    
}
