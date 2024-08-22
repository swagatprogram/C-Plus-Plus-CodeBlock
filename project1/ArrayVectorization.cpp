#include<iostream>
#include<stdio.h>

using namespace std;
int main() {
    const int N = 100;
    std::vector<float> vec(N,1.0f);

    #pragma omp simd
    for(int i =0; i<N; ++i){
        vec[i] += 1.0f;
    }

    float sum = std::accumulate(vec.begin(), vec.end(), 0.0f);

    std::cout << "Sum of vector elements after vectorized addition: " << sum << std::endl;

    return 0;
}
