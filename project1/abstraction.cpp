#include<iostream>
#include<stdio.h>

using namespace std;
int frequency(int num, int k)
{
    int c = 0;
    while(num > 0)
    {
        if(num%10 == k)
        {
            c ++ ;
        }
        num=num/10;
    }
    return c;
}
int main()
{
    int num = 1332422523;

    int k = 2;
    cout << frequency(num,k);
    return 0;
}
