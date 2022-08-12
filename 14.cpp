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
int count_node(Node *head){
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

    cout<<"Enter values : ";
    while(true)
    {   int n;
        cin>>n;
        insert_node(head,n);
        int len = count_node(head);
        display(head);
        cout<<" "<<"Size of the node is: "<<len<<endl;

    }



}


