#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    int n;

    int fact = 1;

    cout << "Enter a positive number:";
    cin >> n;

    if ( n< 0)
    {
        cout << "Error!";
    }
    else {
        for(int i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        cout << "Factorial of " << n << "=" << fact;
    }
    return 0;
}
