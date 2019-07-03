/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Implement Queue using Stacks.
Memory Usage: 8.9 MB, less than 16.02% of C++ online submissions for Implement Queue using Stacks.
*/

class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> in,out;
    
    /** Push element x to the back of queue. */
    void push(int x) {
        in.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int val = peek();
        out.pop();
        return val;
    }
    
    /** Get the front element. */
    int peek() {
        if (out.empty()) {
            while (!in.empty()) 
            {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return in.empty() && out.empty();
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
