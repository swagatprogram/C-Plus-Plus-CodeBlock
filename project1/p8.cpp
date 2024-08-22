#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int x;
    int *p;
    x = 7;
    p = &x;
    cout << *p;
    return 0;
}
