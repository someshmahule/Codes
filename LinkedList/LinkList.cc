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

string LinkList::search(int x)
{
    if(head_)
    {
        Node *start = head_;
        while(start != nullptr)
        {
            if(start->data_ == x)
            {
                return "Found";
            }
            start = start->next_;
        }
    }
    return "Not Found";
}

Node* LinkList::reverse()
{
    if(head_)
    {
        Node *curr = head_;
        Node *prev = nullptr;
        Node *next;

        while(curr)
        {
            next = curr->next_;
            curr->next_ = prev;
            prev = curr; 
            curr = next;
        }
        return prev;
    }
    return nullptr;
}

/*Node* LinkList::reverse_recursion(Node* head)
{
    if(head->next_ == nullptr)
    {
        return head;
    }
    Node* rest = reverse_recursion(head->next_);
    head->next_->next_ = head;
    head->next_ = nullptr;
    return rest;


}*/

Node* LinkList::print_middle()
{
    Node* fast = head_;
    Node* slow = head_;

    while(fast != nullptr && fast->next_ != nullptr)
    {
        fast = fast->next_->next_;
        slow = slow->next_;
    }

    return slow;
}

