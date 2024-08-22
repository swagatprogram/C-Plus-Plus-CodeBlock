#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;
    bool x = b > a;

    // Relational expression.
    cout << "value of x is :"<<x<<endl;

     // Relational expression.
     x = b-a < b+a;
     cout << "New value of x is : "<<x << endl;
     return 0;
}
