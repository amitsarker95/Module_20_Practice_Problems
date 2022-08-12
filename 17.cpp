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
void inser_node_by_position(Node *&head,int pos,int val){
    Node *value = new Node(val);
    if(head == NULL){
        head = value;
        return;
    }
    if(pos==0){
        value->next = head;
        head->prev = value;
        head = value;
        return;
    }
    Node *tmp = head;
   for(int i=0;i<pos-1;i++){
    tmp = tmp->next;
   }
    Node *save = tmp->next;
    if(save == NULL){
        tmp->next = value;
        value->prev = tmp;
    }else{
    tmp->next = value;
    value->prev = tmp;
    value->next = save;
    save->prev = value;
    }

}
int main(){
Node *head = new Node(11);
Node *fast = new Node(12);
head->next = fast;
head->prev = NULL;
fast->next = NULL;
cout<<"Before insert : ";
display(head);
cout<<endl;
int value,pos;
cout<<"Enter the position and the value for insert : ";
cin>>pos>>value;
inser_node_by_position(head,pos,value);
cout<<"After insert : ";
display(head);

return 0;
}
