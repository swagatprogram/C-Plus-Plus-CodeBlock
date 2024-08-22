#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    int arr[3][3];
    for (int j = 0; j<3; ++j){
        for(int i = 0; i<3; ++i){
            std::cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << std::endl;
        }
    }
    return 0;
    }
