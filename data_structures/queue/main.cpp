#include<iostream>

struct Queue{
    int* A = nullptr;
    int c = 0, h = 0, t = 0;
    bool full = false;
    Queue(int cap){
        A = new int[cap];
        c = cap;
    }
    void push(int x){
        if (full) throw "queue is full\n";
        A[t] = x;
        t = (t + 1) % c;
        if(t == h) full = true;
    }
    void pop(){
        if(!full && h == t) throw "queue is empty\n";
        h = (h + 1) % c;
        full = false;
    }
    int top(){
        if(!full && h == t) throw "queue is empty\n";
        return A[h];
    }
    ~Queue(){
        delete[] A;
    }
};

int main(){
    try{
    }catch(char const* message){
        std::cout << "err: " << message << "\n";
    }
}
