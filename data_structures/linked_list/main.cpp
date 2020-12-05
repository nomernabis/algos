#include<iostream>

struct Node{
    int data;
    Node* next;
    explicit Node(int x){
        data = x;
    }
};

struct List{
    Node* head = nullptr;
    Node* tail = nullptr;
    List(){
    }
    ~List(){
        Node* cur = head;
        while(cur){
            Node* next = cur->next;
            delete cur;
            cur = next;
        }
    }
    void add_tail(Node* n){
        if(tail == nullptr) {
            tail = n;
            head = tail;
        } else {
            tail->next = n;
            tail = n;
        }
    }
    void add_head(Node* n){
        if(head == nullptr) {
            head = n;
            tail = head;
        } else {
            n->next = head;
            head = n;
        }
    }
    void print(){
        Node* cur = head;
        while(cur){
            std::cout << cur->data << " ";
            cur = cur->next;
        }
        std::cout << "\n";
    }
};

int main(){
    List list;
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    list.add_tail(a);
    list.add_tail(b);
    list.add_head(c);
    list.print();
    return 0;
}
