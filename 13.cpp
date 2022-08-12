#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {

        this->value = val;
        this->next = NULL;
    }
};
void insert_node(Node *&head,int val)
{
    Node * newNode = new Node(val);
    Node *tmp = head;
    if(head == NULL)
    {
        head = newNode;
        return ;
    }
    while(tmp->next!= NULL)
    {
        tmp=tmp->next;
    }
    tmp->next = newNode;

}
int node_size(Node *head){
    int len = 0;
    Node *tmp = head;
    if(head == NULL){
        return 0;
    }
    while(tmp != NULL){
            len++;
        tmp=tmp->next;
    }
    return len;

}
void delete_node_by_position(Node *&head,int pos)
{
    Node *tmp = head;
    Node *prev = head;
    if(head == NULL)
    {
        return ;
    }

    if(pos == 0)
    {
        head = head->next;
        return;
    }
    while(pos != 0)
    {
        prev = tmp;
        tmp = tmp->next;
        pos--;
    }
    prev->next = tmp->next;
    delete tmp;

}
void display(Node*head)
{
    Node *tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }



}
int main()
{
    Node *head = NULL;


    int pos;
    int s,n;
    cout<<"Enter the size of node : ";
    cin>>s;
    cout<<"Enter values : ";
    while(s--)
    {
        cin>>n;
        insert_node(head,n);
    }
    cout<<"Enter the position to delete : ";
    cin>>pos;
    int len = node_size(head);
    if(pos>len){
        cout<<"invalid";
    }else{
    delete_node_by_position(head,pos);
    display(head);
    }
    return 0;
}

