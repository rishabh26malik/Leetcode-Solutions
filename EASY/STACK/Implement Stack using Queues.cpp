class MyStack {
public:
    /** Initialize your data structure here. */
    queue <int> Q1, Q2, Q3;
    int top1=-1;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        top1=x;
        Q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int res;
        while(Q1.size()!=1){
            top1=Q1.front();
            Q2.push(Q1.front());
            Q1.pop();
        }
        res=Q1.front();
        Q1.pop();
        swap(Q1,Q2);
        return res;
        
    }
    
    /** Get the top element. */
    int top() {
        return top1;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return Q1.empty();
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