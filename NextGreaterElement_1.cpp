// https://leetcode.com/problems/next-greater-element-i/

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    unordered_map<int,int> mp;

    for (int i=0; i<nums2.size(); i++)
    {
        while (!st.empty() && nums2[i] > nums2[st.top()])
        {
            int x = st.top();
            st.pop();
            mp[nums2[x]] = nums2[i];
        }

        st.push(i);
    }

    while (!st.empty())
    {
        int x = st.top();
        st.pop();            
        mp[nums2[x]] = -1;
    }

    vector<int> ans(nums1.size());

    for (int i=0; i<nums1.size(); i++)
    {
        ans[i] = mp[nums1[i]];
    }

    return ans;
}

