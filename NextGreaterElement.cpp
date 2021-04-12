
// https://www.geeksforgeeks.org/next-greater-element/

void nextGreaterElement(int a[], int n)
{
    int ans[n];
    stack<int> st;
    
    for (int i=0; i<n; i++)
    {
        while (!st.empty() && a[i] > a[st.top()])
        {
            int x = st.top();
            ans[x] = a[i];
            st.pop();
        }
        
        st.push(i);
    }
    
    while (!st.empty())
    {
        int x = st.top();
        ans[x] = -1;
        st.pop();
    }

    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    for (int i=0; i<n; i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main()
{
    int a[] = {98,23,54,12,20,7,27};
    int n = sizeof(a)/sizeof(int);
    nextGreaterElement(a,n);
}
