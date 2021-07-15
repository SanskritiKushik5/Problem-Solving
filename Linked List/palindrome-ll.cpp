#include <iostream>
#include <string>
#include <bits/stdc++.h>
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
bool palindrome(node* &head)
{
    node* temp = head;
    string str = "";
    while(temp!=NULL){
        str = str + to_string(temp->data);
        temp = temp->next;
    }
    string check = str;
    cout << check << endl;
    reverse(str.begin(), str.end());
    cout << str << endl;
    if (check == str)
        return true;
    else
        return false;
}
int main()
{
    node* head = NULL;
    insertTail(head, 3);
    insertTail(head, 4);
    insertTail(head, 4);
    insertTail(head, 4);
    insertTail(head, 3);
    display(head);
    cout << palindrome(head);
    return 0;
}
