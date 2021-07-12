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
void makeCycle(node* &head, int pos)
{
    node* temp = head;
    node* start;

    int count = 1;
    while(temp->next!=NULL){
        if(count == pos){
            start = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = start;
}
bool detectCycle(node* &head)
{
    node* slow = head;
    node* fast = head;
    while(fast != NULL && fast->next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}
void removeCycle(node* &head)
{
    node* slow = head;
    node* fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);
    fast = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
int main()
{
    node* head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertTail(head, 4);
    insertTail(head, 5);
    insertTail(head, 6);
    insertTail(head, 7);
    insertTail(head, 8);
    insertTail(head, 9);
    display(head);
    makeCycle(head, 4);
    cout << detectCycle(head) <<endl;
    removeCycle(head);
    cout << detectCycle(head) <<endl;
    display(head);
    return 0;
}
