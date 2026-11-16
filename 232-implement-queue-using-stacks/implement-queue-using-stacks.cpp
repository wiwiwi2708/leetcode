class MyQueue {
private:
    stack<int> stk1, stk2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {

       while (!stk1.empty()) {
            stk2.push(stk1.top());
            stk1.pop();
        }
        stk1.push(x);
        while (!stk2.empty()) {
            stk1.push(stk2.top());
            stk2.pop();
        }
    
    }

    int pop() {
        int s = stk1.top();
         if (!stk1.empty()) {
            stk1.pop();
        }
        return s;
    }

    int peek() {
        if (!stk1.empty()) {
            return stk1.top();
        }
        return -1;
    }

    bool empty() {
        return stk1.empty();
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