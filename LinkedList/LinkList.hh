#ifndef LINKLIST_H
#define LINKLIST_H

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
};

#endif