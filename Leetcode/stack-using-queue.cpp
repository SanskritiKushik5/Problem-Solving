class MyStack {
public:
    int N;
    queue<int> q1;
    queue<int> q2;
    
    MyStack() {
        N = 0;
    }
    
    void push(int x) {
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
    
    int pop() {
        int x = q1.front();
        q1.pop();
        N--;
        return x;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(q1.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
