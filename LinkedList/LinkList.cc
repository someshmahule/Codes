#include "LinkList.hh"
#include <iostream>

using namespace std;

LinkList::LinkList() : head_(nullptr) {}

LinkList::~LinkList()
{
    while(head_)
    {
        Node *tmp = head_;
        head_ = head_->next_;
        delete tmp;
    }
    
}

void LinkList::insert_node(int data)
{
    if(head_ != nullptr)
    {
        Node *start = head_;
        while(start->next_!=nullptr)
        {   
            start = start->next_;
        }
        start->next_ = new Node(data);
    }
    else
    {
        head_ = new Node(data);
    }
}


void LinkList::delete_node(int data)
{
    if(head_->data_ == data) //delete head node
    {
        Node *tmp = head_;
        head_ = head_->next_;
        delete tmp;
    } 
    else
    {
        Node *start = head_;
        Node *prev = head_;
        while(start->data_ != data){
            prev = start;
            start = start->next_;
        }
        prev->next_ = start->next_;
        delete start;
    }
}

void LinkList::print_list()
{
    if(head_)
    {
        Node *start = head_;
        while (start)
        {
            cout<<start->data_<<endl;
            start = start->next_;
        }
        
    }
}

