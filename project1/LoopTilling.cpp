#include<iostream>
#include<stdio.h>

using namespace std;
int main() {
    const int N = 100;
    int arr[N][N];
    const int block_size = 10;

    for (int i = 0; i < N; i += block_size) {
        for (int j = 0; j < N; j += block_size) {
            for (int ii = i; ii < i + block_size; ++ii) {
                for (int jj = j; jj < j + block_size; ++jj) {
                    std::cout << "arr[" << ii << "][" << jj << "] = " << arr[ii][jj] << std::endl;
                }
            }
        }
    }
    return 0;
}
