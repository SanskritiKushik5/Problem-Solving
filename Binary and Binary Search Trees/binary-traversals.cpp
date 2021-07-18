#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* l;
    struct Node* r;
    Node(int val){
        data = val;
        l = NULL;
        r = NULL;
    }
};
void preorder(struct Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->l);
    preorder(root->r);
}
void inorder(struct Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->l);
    cout << root->data << " ";
    inorder(root->r);
}
void postorder(struct Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->l);
    postorder(root->r);
    cout << root->data << " ";
}
int main()
{
    struct Node* root = new Node(1);
    root->l = new Node(2);
    root->r = new Node(3);
    root->l->l = new Node(4);
    root->l->r = new Node(5);
    root->r->l = new Node(6);
    root->r->r = new Node(7);
    cout << "Preorder: ";
    preorder(root);
    cout << endl;
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    cout << "Postorder: ";
    postorder(root);
    cout << endl;
    return 0;
}

