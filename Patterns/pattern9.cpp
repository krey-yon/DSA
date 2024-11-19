#include <bits/stdc++.h>

using namespace std;

void pattern(int N)
{
    for (int i = 0; i < N; i++){
        //spaces
        for (int j = 0; j < N-i-1; j++){
            cout << " ";
        }
        //stars
        for (int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < N-1; i++){
        //spaces
        for (int j = 0; j < i+1; j++){
            cout << " ";
        }
        //stars
        for (int j = 0; j < 2*N-(2*i+3); j++){
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