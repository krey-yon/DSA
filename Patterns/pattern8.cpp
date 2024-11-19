#include <bits/stdc++.h>

using namespace std;

void pattern(int N)
{
    for (int i = 0; i < N; i++){
        //spaces
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        //stars
        for (int j = 0; j < 2*N-(2*i+1); j++){
            cout << "*";
        }
        cout << endl;
    }
    
    
}
int main(){
    int N = 5;
    pattern(N);
    return 0;
}