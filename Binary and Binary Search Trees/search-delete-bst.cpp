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
Node* searchBST(Node* root, int key){
    if(root == NULL)
        return NULL;
    if(root->data == key)
        return root;
    if(root->data>key)
        return searchBST(root->l, key);
    return searchBST(root->r, key);
}
Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->l != NULL)
        curr = curr->l;
    return curr;
}
Node* deleteBST(Node* root, int key){
    if(key<root->data)
        root->l = deleteBST(root->l, key);
    else if(key>root->data)
        root->r = deleteBST(root->r, key);
    else{
        if(root->l == NULL){
            Node* temp = root->r;
            free(root);
            return temp;
        }
        else if(root->r == NULL){
            Node* temp = root->l;
            free(root);
            return temp;
        }
        Node* temp = inorderSucc(root->r);
        root->data = temp->data;
        root->r = deleteBST(root->r, temp->data);
    }
    return root;
}
int main(){
    Node* root = NULL;
    root = insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 6);
    inorder(root);
    if(searchBST(root, 3)!=NULL)
        cout << "True" << endl;
    root = deleteBST(root, 5);
    inorder(root);
    root = deleteBST(root, 2);
    inorder(root);
    return 0;
}
