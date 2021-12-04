class MinStack {
public:
    stack<pair<int, int>> s1;
    MinStack() {
        
    }
    
    void push(int val) {
        int minVal = val;
        
        if(!s1.empty()) {
            pair<int, int> p1 = s1.top();
            if ( p1.second < minVal ) minVal = p1.second;
        }
        
        s1.push( make_pair( val, minVal ) );
    }
    
    void pop() {
        s1.pop();
    }
    
    int top() {
        return s1.top().first;
    }
    
    int getMin() {
        return s1.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
