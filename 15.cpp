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
void display(Node*head)
{
    Node *tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }



}
void move_tail(Node *&head){
    Node *tmp = head;
    if(head->next == NULL){
        return;
    }
    while(tmp->next->next!= NULL){
        tmp=tmp->next;
    }
    int newVal = tmp->next->value;
    tmp->next = NULL;
    Node *newHead = new Node(newVal);
    newHead->next = head;
    head = newHead;
    return;

}


int main(){
Node * head = new Node(9);
Node * fast = new Node(2);
Node * second= new Node(3);
Node * third = new Node(4);
Node * fourth = new Node(1);

head->next = fast;
fast->next = second;
second->next = third;
third->next = fourth;
cout<<"Before move : ";
display(head);
cout<<endl;
move_tail(head);

cout<<"After move : ";
display(head);


return 0;
}
