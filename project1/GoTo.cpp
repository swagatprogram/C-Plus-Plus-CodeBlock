#include<iostream>
using namespace std;

int main(){
    // Initialization of a variable.
    int i = 0;
    cout << "Numbers from 1 to 5:\n";
    label1:
        // Incrementing the variable.
        i++;
        cout << i << " ";
        // Condition for goto statement (forward reference).
        if(i > 4)
            // Executing goto statement (forward reference).
            goto label2;
        // Condition for goto statement (backward reference).
        if(i < 10)
         // Executing goto statement (backward reference).
         goto label1;

        label2:
            return 0;

}
