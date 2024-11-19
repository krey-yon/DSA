/*
Function are block of code that do something for you.
types of function:
void function - function that do not return anything
return function - function that return something
parameterized function - function that take some input
non-parameterized function - function that do not take any input
*/

#include <bits/stdc++.h>

using namespace std;

void println(string c) {
    cout << "Hello "<< c << endl;
}
void number(int num, int &num2){ //pass by value and pass by reference here & is used to pass by reference
    cout << num + 10 << endl;
    num2 = num2 + 20;
    cout << num2 << endl;
}

int main() {
    string c;
    int num = 0;
    int num2 = 0;
    // cin >> c;
    // println(c);
    number(num, num2);
    cout << num << endl; //0 because the value of num is not changed in the function its called pass by value
    cout << num2 << endl; //20 because the value of num2 is changed in the function its called pass by reference using & sign
    return 0;
}