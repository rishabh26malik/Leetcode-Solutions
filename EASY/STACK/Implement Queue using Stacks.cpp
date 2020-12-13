class MyQueue {
public:
    stack <int> S1, S2;
    int front=-1;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(S1.empty())
            front=x;
        S1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int res;
        while(!S1.empty()){
            S2.push(S1.top());
            S1.pop();
        }
        res=S2.top();
        S2.pop();
        if(!S2.empty())
            front=S2.top();
        while(!S2.empty()){
            S1.push(S2.top());
            S2.pop();
        }
        return res;
    }
    
    /** Get the front element. */
    int peek() {
        return front;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return S1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */