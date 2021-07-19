#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* l;
    Node* r;
    Node(int val){
        data = val;
        l = NULL;
        r = NULL;
    }
};
Node* insertBST(Node* root, int val){
    if(root == NULL)
        return new Node(val);
    if(val<root->data)
        root->l = insertBST(root->l, val);
    else
        root->r = insertBST(root->r, val);
    return root;
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->l);
    cout << root->data << " ";
    inorder(root->r);
}
int main(){
    Node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    inorder(root);
    return 0;
}
