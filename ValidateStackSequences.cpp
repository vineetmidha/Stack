// https://leetcode.com/problems/validate-stack-sequences/

    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if (pushed.size() != popped.size())
            return false;
        
        stack<int> st;
        
        int j=0;
        
        for (auto i: pushed)
        {
            st.push(i);
            
            while (!st.empty() && st.top() == popped[j])
            {
                st.pop();
                j++;
            }
        }
        
        return st.empty();  // j==popped.size()
    }
