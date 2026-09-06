class MinStack {
public:
    MinStack() {
        
    }
    stack<int>st;
    stack<int>stmin;
    
    void push(int value) {
        st.push(value);
        if(stmin.empty() || value<=stmin.top()){
            stmin.push(value);
        }
        else{
            stmin.push(stmin.top());
        }
    }
    
    void pop() {
        st.pop();
        stmin.pop();
     }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return stmin.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */