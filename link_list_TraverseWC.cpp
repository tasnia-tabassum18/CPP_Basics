#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node* head= NULL;
    node* tail=NULL;
public:
   
    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    void display()
    {
        node* tmp;
        tmp = head;
        while (tmp != NULL)
        {
            //cout<<tmp<<endl;
            cout << tmp->data << endl;
            tmp = tmp->next;



        }
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.display();
    linked_list b;
    b.add_node(22);
    b.add_node(33);
    b.add_node(44);
    b.display();
    return 0;
}