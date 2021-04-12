// https://leetcode.com/problems/min-stack/

class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,int>> st;
    
    MinStack() {
    }
    
    void push(int val) {
        if (st.empty())
        {
            st.push({val,val});
            return;
        }
        
        int mini = st.top().second;
        st.push({val, min(val,mini)});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
