#include <iostream>
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
void insertHead(node* &head, int val)
{
    node* n = new node(val);
    if (head==NULL){
        head = n;
        return;
    }
    n->next = head;
    head = n;
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
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteHead(node* &head){
    node* temp;
    if (head==NULL){
        cout << "No elements in the list!" << endl;
    }
    else{
        temp = head;
        head = head->next;
        cout << "Deleted: " << temp->data << endl;
        delete temp;
    }
}
void deleteTail(node* &head){
    node* temp;
    node* current;
    if (head==NULL){
        cout << "No elements in the list!" << endl;
    }
    else if(head->next){
        temp = head;
        head = NULL;
        cout << "Deleted: " << temp->data <<endl;
        delete temp;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            current = temp;
            temp = temp->next;
        }
        cout << "Deleted: " << temp->data <<endl;
        delete temp;
    }
}
void deleteVal(node* &head, int val)
{
    if(head == NULL){
        cout << "No elements in the list!" << endl;
        return;
    }
    if(head->next == NULL){
        deleteHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
int main()
{
    node* head = NULL;
    insertTail(head, 3);
    insertTail(head, 4);
    insertHead(head, 2);
    display(head);
    cout << search(head, 4) << endl;
    deleteHead(head);
    display(head);
    deleteTail(head);
    insertTail(head, 4);
    insertTail(head, 5);
    insertTail(head, 6);
    deleteVal(head, 5);
    display(head);
    return 0;
}

