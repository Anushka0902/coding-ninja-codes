Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/int n;
    cin >> n;
    for(int i = 1; i<=n;i++){
        for(int k = 1; k<=n-i+1;k++)
            cout << n-i+1;
        cout << endl;
    }
  
}
