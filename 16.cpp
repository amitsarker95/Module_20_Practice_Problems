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

void display(Node*head)
{
    Node *tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }



}
void inser_node(Node *&head,int val){
    Node *value = new Node(val);
    if(head == NULL){
        head = value;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = value;
    value->prev = tmp;

}
int main(){
Node *head = NULL;


int opt;
cout<<"Enter a size : ";
cin>>opt;
while(opt--){
    int n;
    cin>>n;
    inser_node(head,n);
}
display(head);

return 0;
}
