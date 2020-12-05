#include<iostream>

struct Stack{
    int* data;
    int size;
    int cur = -1;
    Stack(int sz){
        data = new int[sz];
        size = sz;
    }
    ~Stack(){
        delete[] data;
    }
    void push(int x){
        if(cur+1 < size) data[++cur] = x;
        else std::cout << "stack overflow\n";
    }
    void pop(){
        if(cur > -1) --cur;
        else std::cout << "stack underflow\n";
    }
    int top(){
        if(cur != -1) return data[cur];
        else return -1;
    }
    void print(){
        for(int i=cur; i > -1; --i) std::cout << data[i] << "\n";
    }
};

int main(){
    Stack s(10);
    s.push(1);
    s.push(2);
    std::cout << "top: " << s.top() << "\n";
    s.pop();
    std::cout << "top: " << s.top() << "\n";
    s.pop();
    std::cout << "top: " << s.top() << "\n";
    s.pop();
}
