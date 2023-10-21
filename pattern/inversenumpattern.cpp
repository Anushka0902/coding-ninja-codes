
Print the following pattern for the given number of rows.
Pattern for N = 4

           1
         232
       34543
     4567654

#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n-i;j++)
            cout << ' ';
        for(k = i; k<=2*i-1;k++){
            cout << k;
            
        }
            
        k=2*i-2;
        while(k>=i){
            cout << k;
            k--;
        }
        cout << endl;
    }
    
}
