class MinStack {
public:
    stack<int> mainStack;
    stack<int> extraStack;
    
    MinStack() {}
    
    void push(int val) {
        mainStack.push(val);
        if (extraStack.empty()) return extraStack.push(val);
        int extraTop = extraStack.top();
        if (extraTop > val) extraStack.push(val);
        else extraStack.push(extraTop);
    }
    
    void pop() {
        mainStack.pop();
        extraStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return extraStack.top();
    }
};
