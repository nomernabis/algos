#include<iostream>

void merge(int* A, int l, int m, int r){
    int left_size = m - l + 1;
    int right_size = r - m;
    int L[left_size] = {};
    int R[right_size] = {};
    for(int i=l, j=0; i <= m; ++i, ++j) L[j] = A[i];
    for(int i=m+1, j=0; i <= r; ++i, ++j) R[j] = A[i];
    int i=0, j=0, k=l;
    while(i < left_size && j < right_size){
        if(L[i] < R[j]){
            A[k] = L[i];
            ++i;
        } else {
            A[k] = R[j];
            ++j;
        }
        ++k;
    }
    while(i < left_size){
        A[k] = L[i];
        ++i; ++k;
    }
    while(j < right_size){
        A[k] = R[j];
        ++j; ++k;
    }
}

void merge_sort(int* A, int l, int r){
    if(l < r){
        int m = (l + r) / 2;
        merge_sort(A, l, m);
        merge_sort(A, m+1, r);
        merge(A, l, m, r);
    }
}

int main(){
    int A[10] = {3, -2, 40, 14, 17, -10, 5, 11, 12, 4};
    merge_sort(A, 0, 9);
    for(int i=0; i < 10; ++i) std::cout << A[i] << " ";
    std::cout << std::endl;
    return 0;
}
