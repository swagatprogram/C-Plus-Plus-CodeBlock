#include <bits/stdc++.h>
using namespace std;
int main()
{
   int int_var = 50;
   char char_var = 'a';

   int_var = int_var + char_var;
   // char_var is implicitly converted to the integer ASCII of 'a'.
    // ASCII of 'a' is 97.

   cout << "The value of (50+'a') is: "<< int_var << endl;

    // Now, converting int_var to a float (implicitly).
    float float_var = int_var * 1.5;

    cout << "The value of float_var is: "<< float_var << endl;
   return 0;
}
