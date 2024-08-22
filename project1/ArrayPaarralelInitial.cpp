#include<iostream>
#include<stdio.h>

using namespace std;
int main() {
    const int N = 100;
    int arr[N];

    #pragma omp parallel for
    for(int i =0; i<N; ++i){
        arr[i] = i*2;
    }

    std::cout << "Array after parallel initialization: ";
    for(int i = 0; i < N; ++i){
        std::cout << arr[i] << "";
    }
    std::cout << std::endl;
    return 0;
}
