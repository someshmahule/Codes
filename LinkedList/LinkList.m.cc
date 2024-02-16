#include "LinkList.hh"
#include <iostream>

using namespace std;

int main()
{

    LinkList a;
    for(int i=1;i<5;i++)
    {   
        a.insert_node(i);
    }

    a.print_list();

}