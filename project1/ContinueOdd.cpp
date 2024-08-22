#include<iostream>
#include<stdio.h>

using namespace std;
int main() {
    int i = 0;
    cout << "Odd numbers between 1 to 10:\n";

    // Loop from i=0 to i=9.
    while ( i < 10) {
         // Incrementing the iterator.
         i++;
         // Condition to find if the iterator is even.
         if(i % 2 == 0){
            // Executing continue statement.
            continue;
         }
         cout << i << " ";
    }
    return 0;
}
