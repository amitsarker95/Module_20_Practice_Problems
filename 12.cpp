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
void insert_node_by_position(Node *&head,int pos,int val){
    Node * newNode = new Node(val);
    Node *tmp = head;
    if(head == NULL){
        head = newNode;
        return ;
    }
    if(pos == 0){
        newNode->next = head;
        head = newNode;
        return;
    }
    for(int i=0;i<pos-1;i++){
        tmp = tmp->next;
    }
    Node *save = tmp->next;
    tmp->next = newNode;
    newNode->next = save;

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
int n,pos;
cin>>n>>pos;
insert_node_by_position(head,pos,n);

display(head);
cout<<endl;
}


return 0;
}

