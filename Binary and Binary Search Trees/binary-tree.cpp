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
int main()
{
    struct Node* root = new Node(1);
    root->l = new Node(2);
    root->r = new Node(3);

    return 0;
}
