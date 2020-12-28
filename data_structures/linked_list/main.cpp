#include<iostream>

struct Node{
    int data = 0;
    Node* next = nullptr;
    explicit Node(int value){
        data = value;
    }
};

struct List{
    Node* head = nullptr;
    Node* tail = nullptr;
    void add(Node* n){
        if(tail) tail->next = n;
        tail = n;
        if(!head) head = tail;
    }
    void remove(Node* n){
        if(n == head) head = head->next;
        else {
            Node* walk = head;
            while(walk->next != n) walk = walk->next;
            walk->next = n->next;
            if(n == tail) tail = walk;
        }
    }
    void print(){
        Node* walk = head;
        while(walk){
            std::cout << walk->data << " ";
            walk = walk->next;
        }
        std::cout << std::endl;
    }
};

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    List list;
    list.add(a);
    list.add(b);
    list.add(c);
    list.add(d);
    list.add(e);
    list.print();
    list.remove(c);
    list.print();
    list.remove(a);
    list.print();
    list.remove(e);
    list.print();
    return 0;
}
