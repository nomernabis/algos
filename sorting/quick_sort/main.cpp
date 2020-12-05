#include<iostream>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* A, int l, int r){
    int pivot = A[r];
    int i = l - 1;
    for(int j=l; j <= r-1; ++j){
        if(A[j] <= pivot){
            ++i;
            swap(&A[j], &A[i]);
        }
    }
    swap(&A[i+1], &A[r]);
    return i + 1;
}

void quick_sort(int* A, int l, int r){
    if(l < r){
        
    }
}

int main(){
    int A[10] = {12, 5, -10, 11, 1, 0, 10, 6, 5, 7};
    int r = 10;
    partition(A, 0, 9);
    for(int i=0; i < 10; ++i){
        std::cout << A[i] << " ";
    }
    std::cout << "\n";
    return 0;
}
