#include <bits/stdc++.h>
using namespace std;
class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    Stack(){
        N = 0;
    }
public:
    void push(int x){
        q2.push(x);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    int pop(){
        q1.pop()
        N--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return N;
    }
};


