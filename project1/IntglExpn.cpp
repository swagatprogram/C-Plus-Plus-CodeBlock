#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12,42,35,14,5};
    int *ptr;
    ptr = arr;
    ptr = ptr+3;
    cout << "Value of fourth element of an array :" << *ptr << endl;
    cout << "address of fourth element of an array:" << ptr << endl;
    return 0;
}
