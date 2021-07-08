#include <bits/stdc++.h>
using namespace std;
class Queue{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            return 0;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int topvalue = s2.top();
            s2.pop();
            return topvalue;
        }
    }
    bool isempty(){
        if (s1.empty() and s2.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Queue q;
    int ch;
    cout << "1. Insert\n2. Delete\n3. Empty?\n4. Exit" << endl;
    while(1){
        cout << "Enter your choice: ";
        cin >> ch;
        switch(ch){
        case 1:
            int x;
            cout << "Enter the value: ";
            cin >> x;
            q.push(x);
            break;
        case 2:
            x = q.pop();
            if (x){
                cout << "Element popped: " << x << endl;
            }else{
                cout << "Queue is empty!" << endl;
            }
            break;
        case 3:
            if(q.isempty())
                cout << "Queue is empty!\n";
            else
                cout << "Queue is not empty\n";
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Enter a valid choice!\n";
            break;
        }
    }
    return 0;
}
