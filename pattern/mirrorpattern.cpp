Print the following pattern for the given N number of rows.
Pattern for N = 4
   1 
  12
 123
1234


#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/int n;
    cin >> n;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n-i;j++)
            cout << ' ';
        for(int k = 1; k<=i;k++)
            cout << k;
        cout << endl;
    }
  
}
