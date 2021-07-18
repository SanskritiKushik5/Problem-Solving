
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
void levelorder(struct Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            cout << node->data << " ";
            if(node->l)
                q.push(node->l);
            if(node->r)
                q.push(node->r);
        }
        else if(!q.empty())
            q.push(NULL);
    }
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
    levelorder(root);
    return 0;
}

