#include <iostream>
using namespace std;

int main() {
   int int_var = 17;

   float float_var;

   float_var = float(int_var) / 2;
    // Explicitly converting an int to a float.

    cout << "The value of float_var is: " << float_var << endl;
    return 0;
}
