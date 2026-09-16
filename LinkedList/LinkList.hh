#ifndef LINKLIST_H
#define LINKLIST_H
#include <string>

using namespace std;
typedef struct Node{
    int data_;
    Node *next_;

    Node(int data) : data_(data),next_(nullptr){};
};

typedef struct LinkList
{
    Node *head_;

    LinkList();
    ~LinkList();
    void insert_node(int data);
    void delete_node(int data);
    void print_list();
    string search(int x);
    Node* reverse();
    Node* print_middle();
};

#endif