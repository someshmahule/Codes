#include "LinkList.hh"
#include <iostream>

using namespace std;

int main()
{

    LinkList a;
    Node* ret;
    while (1)
    {
        cout<<"Select Operation:"<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Print List"<<endl;
        cout<<"4. Search"<<endl;
        cout<<"5. Reverse"<<endl;
        cout<<"6. Print Middle"<<endl;
        cout<<"7. Exit"<<endl;
        int op;
        cin>>op;
        switch (op)
        {
        case 1:
            cout<<"Enter data to insert"<<endl;
            int data;
            cin>>data;
            a.insert_node(data);
            break;
        case 2:
            cout<<"Enter data to delete"<<endl;
            int del;
            cin>>del;
            a.delete_node(del);
            break;
        case 3:
            cout<<"List ->"<<endl;
            a.print_list();
            break;
        case 4:
            cout<<"Enter data to search"<<endl;
            int x;
            cin>>x;
            cout<<a.search(x)<<endl;
            break;
        case 5:
            a.head_ = a.reverse();
            break;
        case 6:
            ret = a.print_middle();
            cout<<ret->data_<<endl;
            break;
        case 7:
            exit(0);
        default:
            break;
        }
        
    }
}