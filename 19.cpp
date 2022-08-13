#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int value;
    Node *prev;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_node(Node * &head,int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    };
    tmp->next = newNode;
    newNode->prev = tmp;
};

void move_head_to_tail(Node * &head){

    if(head->next == NULL) return;

    int first = head->value;
    Node *tmp = head->next;
    Node *rest = tmp;
    tmp->prev = NULL;

    while(tmp->next!=NULL){
        tmp = tmp->next;
    }
    Node *newNode = new Node(first);
    tmp->next = newNode;
    newNode->prev = tmp;
    head = rest;
    return;

}

void print(Node * head){
    if(head == NULL){
            cout<<"The list is empty."<<endl;
            return;
    }
    while(head!=NULL){
        cout<<head->value;
        if(head->next != NULL) cout<<" <=> ";
        head = head->next;
    }
    cout<<endl;
}


int main(){
    Node *head = NULL;
    int a;
    cout<<"Enter 0 to show the list "<<endl;
    cin>>a;
    while(a!= 0){
        insert_node(head,a);
        cin>>a;
    }
    if(head == NULL){
      cout<<"The list is empty."<<endl;
    }else{
    cout<<"After move : ";
    move_head_to_tail(head);
    print(head);
    }

    return 0;
}
