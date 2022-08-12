#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int val)
    {

        this->value = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int node_count(Node * head)
{
    int counter = 0;
    Node * tmp = head;
    while(tmp != NULL)
    {
        counter++;
        tmp = tmp->next;
    }
    return counter;
}
void delete_node_by_position(Node * &head,int pos)
{
    Node *tmp = head;
    if(pos == 0 && tmp != NULL)
    {
        tmp = tmp->next;
        head = tmp;
        return;
    };

    int len = node_count(head);
    if(pos>len-1)
    {
        cout<<"invalid"<<endl;
        return;
    };
    for(int i=0; i<pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node * rest = tmp->next->next;
    if(rest == NULL)tmp->next = NULL;
    else
    {
        Node *deleteNode = tmp->next;
        tmp->next = rest;
        rest->prev = tmp;
        delete deleteNode;
    }
}

void display(Node * head)
{
    if(head == NULL)cout<<"NULL"<<endl;
    while(head!=NULL)
    {
        cout<<head->value;
        if(head->next != NULL) cout<<" <=> ";
        head = head->next;
    }
    cout<<endl;
}


int main()
{
    Node *head = new Node(11);
    Node *fast = new Node(12);
    Node *second = new Node(13);
    Node *third = new Node(14);
    Node *fourth = new Node(15);
    head->next = fast;
    fast->next = second;
    second->next = third;
    third->next = fourth;
    fast->prev = head;
    second->prev = fast;
    third->prev = second;
    fourth->prev = third;

    fourth->next = NULL;
    head->prev = NULL;



    cout<<"Before delete : ";
    display(head);
    cout<<endl;
    int pos;
    cout<<"Enter the position to delete : ";
    cin>>pos;
    delete_node_by_position(head,pos);
    cout<<"After delete : ";
    display(head);

    return 0;
}

