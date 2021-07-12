#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertTail(node* &head, int val)
{
    node* n = new node(val);
    if (head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

node* reverse(node* &head)
{
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* newhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

int main()
{
    node* head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertTail(head, 4);
    display(head);
    node* newhead = reverse(head);
    display(newhead);
    return 0;
}
