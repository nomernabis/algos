#include<iostream>

int main(){
    int N = 10;
    int A[N] = {
        4, 3, 10, 1, 2, 9, 7, 8, 5, 6
    };
    for(int n=N-1; n > 0; --n){
        for(int i=0; i < n; ++i){
            if(A[i] > A[i+1]){
                int t = A[i];
                A[i] = A[i+1];
                A[i+1] = t;
            }
        }
    }
    for(int i=0; i < N; ++i){
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
