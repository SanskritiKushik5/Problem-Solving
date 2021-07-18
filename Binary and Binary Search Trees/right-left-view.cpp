
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

void rightView(struct Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++){
            Node* curr = q.front();
            q.pop();
            if(i == n-1)
                cout << curr->data << " ";
            if(curr->l!=NULL)
                q.push(curr->l);
            if(curr->r!=NULL)
                q.push(curr->r);
        }
    }
}
void leftView(struct Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=1; i<=n; i++){
            Node* curr = q.front();
            q.pop();
            if(i == 1)
                cout << curr->data << " ";
            if(curr->l!=NULL)
                q.push(curr->l);
            if(curr->r!=NULL)
                q.push(curr->r);
        }
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
    rightView(root);
    cout << endl;
    leftView(root);
    return 0;
}

