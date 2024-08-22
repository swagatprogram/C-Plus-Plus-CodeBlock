#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;
    bool x = -2;
    int y = 76;

    // Logical expression using OR operator.
    bool z = (b > a) || (x > y);
    cout << "value of z is : " << z << endl;

     // Logical expression using AND operator.
     z = (b-a < b+a) && (x - y < x + y);
     cout << "New value of z is : "<< z << endl;
     return 0;
}
