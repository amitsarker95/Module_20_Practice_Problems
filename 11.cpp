#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *next;
    Node(int val){

        this->value = val;
        this->next = NULL;
    }
};
void insert_node(Node *&head,int val){
    Node * newNode = new Node(val);
    Node *tmp = head;
    if(head == NULL){
        head = newNode;
        return ;
    }
    while(tmp->next!= NULL){
        tmp=tmp->next;
    }
    tmp->next = newNode;

}
void display(Node*head){
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }



}
int main(){
Node *head = NULL;

while(true){
int n;
cin>>n;
insert_node(head,n);

display(head);
cout<<endl;
}


return 0;
}
